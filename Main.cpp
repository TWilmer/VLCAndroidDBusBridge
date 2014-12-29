/*
 * Main.cpp
 *
 *  Created on: 28-Dec-2014
 *      Author: thorsten
 */

#include "Main.h"
#include <iostream>
#include <dbus-c++/dbus.h>
#include <sstream>
#include "org.mpris.MediaPlayer2.vlc.h"

#include <string>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <thread>
#include "TCPTalker.h"

#include "UDPTalker.h"

class Player
		: public org::mpris::MediaPlayer2::Player_proxy
		  , public DBus::IntrospectableProxy
		  , public DBus::ObjectProxy
		  {
		  public:
	Player(DBus::Connection& connection, const char* path, const char* name)
		  : DBus::ObjectProxy(connection, path, name) {
	}
		  };

class MediaPlayer2
		: public org::mpris::MediaPlayer2_proxy
		  , public DBus::IntrospectableProxy
		  , public DBus::ObjectProxy
		  {
		  public:
	MediaPlayer2(DBus::Connection& connection, const char* path, const char* name)
		  : DBus::ObjectProxy(connection, path, name) {
	}
		  };

DBus::BusDispatcher dispatcher;
static int eject_cdrom(char *dev);
static int eject_cdrom(char *dev)
{
	int ret=0;
	int fd = open(dev, O_RDWR | O_NONBLOCK);
#if defined(CDROMEJECT)
	int ret = ioctl(fd, CDROM_LOCKDOOR, 0);
	if (ret < 0)
		return 0;
	ret= ioctl(fd, CDROMEJECT) >= 0;
#elif defined(CDIOCEJECT)
	ret= ioctl(fd, CDIOCEJECT) >= 0;
#else
	errno = ENOSYS;
	ret= 0;
#endif
	close(fd);
	return ret;
}

void handleTcp()
{

}

int main(int argc, char **argv)
{
	if(argc!=2)
	{
		std::cout << "Please give me a name" << std::endl;
		return 0;
	}
	std::string name=argv[1];

	std::thread tcpHandler(handleTcp);

	for(size_t i=0;i<name.length();i++)
	{
		if( !(name[i]>='0' && name[i]<='9' )
				&&	 !(name[i]>='A' && name[i]<='Z' )
				&&	 !(name[i]>='a' && name[i]<='z' )
		)
		{
			std::cout << "Please give me a proper name" << std::endl;
			return 0;
		}
	}

	DBus::default_dispatcher = &dispatcher;
	DBus::Connection bus = DBus::Connection::SessionBus();
	Player player(bus, "/org/mpris/MediaPlayer2", "org.mpris.MediaPlayer2.vlc");

	MediaPlayer2 mplayer(bus, "/org/mpris/MediaPlayer2", "org.mpris.MediaPlayer2.vlc");

	UDPTalker talker(4001);

	std::string myPrefix=name;
	myPrefix.append(1,'@');

	for (;;) {
		printf("waiting on port %d\n", 4001);



		std::string req=talker.listen();

		if(req=="HELLO")
		{
			std::string response;
			response="ME="+name;
			talker.response(response);

		}

		if(req.find(myPrefix)==0)
		{

			std::string cmd=req.substr(req.find("@")+1,-1);
			std::cout << "Got command:" <<cmd <<std::endl;
			try{
			if(cmd=="play")
			{
				player.Play();
			}
			if(cmd=="up")
			{
				player.Up();
			}
			if(cmd=="down")
			{
				player.Down();
			}
			if(cmd=="left")
			{
				player.Left();
			}
			if(cmd=="right")
			{
				player.Right();
			}
			if(cmd=="ok")
			{
				player.Activate();
			}
			if(cmd=="pause")
			{
				player.Pause();
			}
			if(cmd=="stop")
			{
				player.Stop();
			}
			if(cmd=="menu")
			{
				player.Menu();
			}
			if(cmd=="next")
			{
				player.Next();
			}
			if(cmd=="prev")
			{
				player.Previous();
			}
			if(cmd=="chapter_n")
			{
				player.ChapterN();
			}
			if(cmd=="chapter_p")
			{
				player.ChapterP();
			}
			if(cmd=="title_n")
			{
				player.TitleN();
			}
			if(cmd=="title_p")
			{
				player.TitleP();
			}
			if(cmd=="eject")
			{
				player.Eject();
				system("eject /dev/sr0");

			}
			if(cmd=="GetSubtitleTrack")
			{
				std::string resp=name+"$GetSubtitleTrack="+	player.GetSubtitleTrack();
				talker.response(resp);
			}
			if(cmd=="GetAudioTrack")
			{
				std::string resp=name+"$GetAudioTrack="+	player.GetAudioTrack();
				talker.response(resp);
			}
			if(cmd.find("SetSubtitleTrack")==0)
			{
				std::string val=cmd.substr(1+cmd.find("="),-1);
				long int  t=atoi(val.c_str());
				std::cout << "Set SetSubtitleTrack" << val<< " Track "<<t<< std::endl;
				player.SetSubtitleTrack(t);
			}
			if(cmd.find("SetAudioTrack")==0)
			{
				std::string val=cmd.substr(1+cmd.find("="),-1);
				player.SetAudioTrack(atoi(val.c_str()));
			}
			if(cmd.find("SetPosition")==0)
			{
				std::string val=cmd.substr(1+cmd.find("="),-1);
				player.SetPosition("/org/mpris/MediaPlayer2",std::stoll(val));
			}
			if(cmd.find("GetPosition")==0)
			{


				std::stringstream resp;
				resp << name << "$GetPosition=" << player.Position()
						<< "|Length="<< player.Length()
	                    <<"|Track="<<player.Track()
						<<"|Chapter="<<player.Chapter()
						<<"|Title="<<player.Title();

				talker.response(resp.str());

			}
			}catch(DBus::Error e)
							{

							}

		}

	}


}


