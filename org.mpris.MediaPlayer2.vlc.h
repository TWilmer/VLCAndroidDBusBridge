
/*
 *	This file was automatically generated by dbusxx-xml2cpp; DO NOT EDIT!
 */

#ifndef __dbusxx__org_mpris_MediaPlayer2_vlc_h__PROXY_MARSHAL_H
#define __dbusxx__org_mpris_MediaPlayer2_vlc_h__PROXY_MARSHAL_H

#include <dbus-c++/dbus.h>
#include <cassert>

namespace org {
namespace mpris {

class MediaPlayer2_proxy
: public ::DBus::InterfaceProxy
{
public:

    MediaPlayer2_proxy()
    : ::DBus::InterfaceProxy("org.mpris.MediaPlayer2")
    {
    }

public:

    /* properties exported by this interface */
        const std::string Identity() {
            ::DBus::CallMessage call ;
             call.member("Get"); call.interface("org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            const std::string interface_name = "org.mpris.MediaPlayer2";
            const std::string property_name  = "Identity";
            wi << interface_name;
            wi << property_name;
            ::DBus::Message ret = this->invoke_method (call);
            ::DBus::MessageIter ri = ret.reader ();
            ::DBus::Variant argout; 
            ri >> argout;
            return argout;
        };
        const std::string DesktopEntry() {
            ::DBus::CallMessage call ;
             call.member("Get"); call.interface("org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            const std::string interface_name = "org.mpris.MediaPlayer2";
            const std::string property_name  = "DesktopEntry";
            wi << interface_name;
            wi << property_name;
            ::DBus::Message ret = this->invoke_method (call);
            ::DBus::MessageIter ri = ret.reader ();
            ::DBus::Variant argout; 
            ri >> argout;
            return argout;
        };
        const std::vector< std::string > SupportedMimeTypes() {
            ::DBus::CallMessage call ;
             call.member("Get"); call.interface("org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            const std::string interface_name = "org.mpris.MediaPlayer2";
            const std::string property_name  = "SupportedMimeTypes";
            wi << interface_name;
            wi << property_name;
            ::DBus::Message ret = this->invoke_method (call);
            ::DBus::MessageIter ri = ret.reader ();
            ::DBus::Variant argout; 
            ri >> argout;
            return argout;
        };
        const std::vector< std::string > SupportedUriSchemes() {
            ::DBus::CallMessage call ;
             call.member("Get"); call.interface("org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            const std::string interface_name = "org.mpris.MediaPlayer2";
            const std::string property_name  = "SupportedUriSchemes";
            wi << interface_name;
            wi << property_name;
            ::DBus::Message ret = this->invoke_method (call);
            ::DBus::MessageIter ri = ret.reader ();
            ::DBus::Variant argout; 
            ri >> argout;
            return argout;
        };
        const bool HasTrackList() {
            ::DBus::CallMessage call ;
             call.member("Get"); call.interface("org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            const std::string interface_name = "org.mpris.MediaPlayer2";
            const std::string property_name  = "HasTrackList";
            wi << interface_name;
            wi << property_name;
            ::DBus::Message ret = this->invoke_method (call);
            ::DBus::MessageIter ri = ret.reader ();
            ::DBus::Variant argout; 
            ri >> argout;
            return argout;
        };
        const bool CanQuit() {
            ::DBus::CallMessage call ;
             call.member("Get"); call.interface("org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            const std::string interface_name = "org.mpris.MediaPlayer2";
            const std::string property_name  = "CanQuit";
            wi << interface_name;
            wi << property_name;
            ::DBus::Message ret = this->invoke_method (call);
            ::DBus::MessageIter ri = ret.reader ();
            ::DBus::Variant argout; 
            ri >> argout;
            return argout;
        };
        const bool CanSetFullscreen() {
            ::DBus::CallMessage call ;
             call.member("Get"); call.interface("org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            const std::string interface_name = "org.mpris.MediaPlayer2";
            const std::string property_name  = "CanSetFullscreen";
            wi << interface_name;
            wi << property_name;
            ::DBus::Message ret = this->invoke_method (call);
            ::DBus::MessageIter ri = ret.reader ();
            ::DBus::Variant argout; 
            ri >> argout;
            return argout;
        };
        const bool Fullscreen() {
            ::DBus::CallMessage call ;
             call.member("Get"); call.interface("org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            const std::string interface_name = "org.mpris.MediaPlayer2";
            const std::string property_name  = "Fullscreen";
            wi << interface_name;
            wi << property_name;
            ::DBus::Message ret = this->invoke_method (call);
            ::DBus::MessageIter ri = ret.reader ();
            ::DBus::Variant argout; 
            ri >> argout;
            return argout;
        };
        void Fullscreen( const bool & input) {
            ::DBus::CallMessage call ;
             call.member("Set");  call.interface( "org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            ::DBus::Variant value;
            ::DBus::MessageIter vi = value.writer ();
            vi << input;
            const std::string interface_name = "org.mpris.MediaPlayer2";
            const std::string property_name  = "Fullscreen";
            wi << interface_name;
            wi << property_name;
            wi << value;
            ::DBus::Message ret = this->invoke_method (call);
        };
        const bool CanRaise() {
            ::DBus::CallMessage call ;
             call.member("Get"); call.interface("org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            const std::string interface_name = "org.mpris.MediaPlayer2";
            const std::string property_name  = "CanRaise";
            wi << interface_name;
            wi << property_name;
            ::DBus::Message ret = this->invoke_method (call);
            ::DBus::MessageIter ri = ret.reader ();
            ::DBus::Variant argout; 
            ri >> argout;
            return argout;
        };
public:

    /* methods exported by this interface,
     * this functions will invoke the corresponding methods on the remote objects
     */
    void Quit()
    {
        ::DBus::CallMessage call;
        call.member("Quit");
        ::DBus::Message ret = invoke_method (call);
    }

    void Raise()
    {
        ::DBus::CallMessage call;
        call.member("Raise");
        ::DBus::Message ret = invoke_method (call);
    }


public:

    /* signal handlers for this interface
     */

private:

    /* unmarshalers (to unpack the DBus message before calling the actual signal handler)
     */
};

} } 
namespace org {
namespace mpris {
namespace MediaPlayer2 {

class Player_proxy
: public ::DBus::InterfaceProxy
{
public:

    Player_proxy()
    : ::DBus::InterfaceProxy("org.mpris.MediaPlayer2.Player")
    {
    }

public:

    /* properties exported by this interface */
        const std::map< std::string, ::DBus::Variant > Metadata() {
            ::DBus::CallMessage call ;
             call.member("Get"); call.interface("org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            const std::string interface_name = "org.mpris.MediaPlayer2.Player";
            const std::string property_name  = "Metadata";
            wi << interface_name;
            wi << property_name;
            ::DBus::Message ret = this->invoke_method (call);
            ::DBus::MessageIter ri = ret.reader ();
            ::DBus::Variant argout; 
            ri >> argout;
            return argout;
        };
        const std::string PlaybackStatus() {
            ::DBus::CallMessage call ;
             call.member("Get"); call.interface("org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            const std::string interface_name = "org.mpris.MediaPlayer2.Player";
            const std::string property_name  = "PlaybackStatus";
            wi << interface_name;
            wi << property_name;
            ::DBus::Message ret = this->invoke_method (call);
            ::DBus::MessageIter ri = ret.reader ();
            ::DBus::Variant argout; 
            ri >> argout;
            return argout;
        };
        const std::string LoopStatus() {
            ::DBus::CallMessage call ;
             call.member("Get"); call.interface("org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            const std::string interface_name = "org.mpris.MediaPlayer2.Player";
            const std::string property_name  = "LoopStatus";
            wi << interface_name;
            wi << property_name;
            ::DBus::Message ret = this->invoke_method (call);
            ::DBus::MessageIter ri = ret.reader ();
            ::DBus::Variant argout; 
            ri >> argout;
            return argout;
        };
        void LoopStatus( const std::string & input) {
            ::DBus::CallMessage call ;
             call.member("Set");  call.interface( "org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            ::DBus::Variant value;
            ::DBus::MessageIter vi = value.writer ();
            vi << input;
            const std::string interface_name = "org.mpris.MediaPlayer2.Player";
            const std::string property_name  = "LoopStatus";
            wi << interface_name;
            wi << property_name;
            wi << value;
            ::DBus::Message ret = this->invoke_method (call);
        };
        const double Volume() {
            ::DBus::CallMessage call ;
             call.member("Get"); call.interface("org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            const std::string interface_name = "org.mpris.MediaPlayer2.Player";
            const std::string property_name  = "Volume";
            wi << interface_name;
            wi << property_name;
            ::DBus::Message ret = this->invoke_method (call);
            ::DBus::MessageIter ri = ret.reader ();
            ::DBus::Variant argout; 
            ri >> argout;
            return argout;
        };
        void Volume( const double & input) {
            ::DBus::CallMessage call ;
             call.member("Set");  call.interface( "org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            ::DBus::Variant value;
            ::DBus::MessageIter vi = value.writer ();
            vi << input;
            const std::string interface_name = "org.mpris.MediaPlayer2.Player";
            const std::string property_name  = "Volume";
            wi << interface_name;
            wi << property_name;
            wi << value;
            ::DBus::Message ret = this->invoke_method (call);
        };
        const double Shuffle() {
            ::DBus::CallMessage call ;
             call.member("Get"); call.interface("org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            const std::string interface_name = "org.mpris.MediaPlayer2.Player";
            const std::string property_name  = "Shuffle";
            wi << interface_name;
            wi << property_name;
            ::DBus::Message ret = this->invoke_method (call);
            ::DBus::MessageIter ri = ret.reader ();
            ::DBus::Variant argout; 
            ri >> argout;
            return argout;
        };
        void Shuffle( const double & input) {
            ::DBus::CallMessage call ;
             call.member("Set");  call.interface( "org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            ::DBus::Variant value;
            ::DBus::MessageIter vi = value.writer ();
            vi << input;
            const std::string interface_name = "org.mpris.MediaPlayer2.Player";
            const std::string property_name  = "Shuffle";
            wi << interface_name;
            wi << property_name;
            wi << value;
            ::DBus::Message ret = this->invoke_method (call);
        };
        const int64_t Position() {
            ::DBus::CallMessage call ;
             call.member("Get"); call.interface("org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            const std::string interface_name = "org.mpris.MediaPlayer2.Player";
            const std::string property_name  = "Position";
            wi << interface_name;
            wi << property_name;
            ::DBus::Message ret = this->invoke_method (call);
            ::DBus::MessageIter ri = ret.reader ();
            ::DBus::Variant argout; 
            ri >> argout;
            return argout;
        };
        const int64_t Length() {
            ::DBus::CallMessage call ;
             call.member("Get"); call.interface("org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            const std::string interface_name = "org.mpris.MediaPlayer2.Player";
            const std::string property_name  = "Length";
            wi << interface_name;
            wi << property_name;
            ::DBus::Message ret = this->invoke_method (call);
            ::DBus::MessageIter ri = ret.reader ();
            ::DBus::Variant argout; 
            ri >> argout;
            return argout;
        };
        const int32_t Chapter() {
            ::DBus::CallMessage call ;
             call.member("Get"); call.interface("org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            const std::string interface_name = "org.mpris.MediaPlayer2.Player";
            const std::string property_name  = "Chapter";
            wi << interface_name;
            wi << property_name;
            ::DBus::Message ret = this->invoke_method (call);
            ::DBus::MessageIter ri = ret.reader ();
            ::DBus::Variant argout; 
            ri >> argout;
            return argout;
        };
        const int32_t Track() {
            ::DBus::CallMessage call ;
             call.member("Get"); call.interface("org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            const std::string interface_name = "org.mpris.MediaPlayer2.Player";
            const std::string property_name  = "Track";
            wi << interface_name;
            wi << property_name;
            ::DBus::Message ret = this->invoke_method (call);
            ::DBus::MessageIter ri = ret.reader ();
            ::DBus::Variant argout; 
            ri >> argout;
            return argout;
        };
        const std::string Title() {
            ::DBus::CallMessage call ;
             call.member("Get"); call.interface("org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            const std::string interface_name = "org.mpris.MediaPlayer2.Player";
            const std::string property_name  = "Title";
            wi << interface_name;
            wi << property_name;
            ::DBus::Message ret = this->invoke_method (call);
            ::DBus::MessageIter ri = ret.reader ();
            ::DBus::Variant argout; 
            ri >> argout;
            return argout;
        };
        const double Rate() {
            ::DBus::CallMessage call ;
             call.member("Get"); call.interface("org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            const std::string interface_name = "org.mpris.MediaPlayer2.Player";
            const std::string property_name  = "Rate";
            wi << interface_name;
            wi << property_name;
            ::DBus::Message ret = this->invoke_method (call);
            ::DBus::MessageIter ri = ret.reader ();
            ::DBus::Variant argout; 
            ri >> argout;
            return argout;
        };
        void Rate( const double & input) {
            ::DBus::CallMessage call ;
             call.member("Set");  call.interface( "org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            ::DBus::Variant value;
            ::DBus::MessageIter vi = value.writer ();
            vi << input;
            const std::string interface_name = "org.mpris.MediaPlayer2.Player";
            const std::string property_name  = "Rate";
            wi << interface_name;
            wi << property_name;
            wi << value;
            ::DBus::Message ret = this->invoke_method (call);
        };
        const double MinimumRate() {
            ::DBus::CallMessage call ;
             call.member("Get"); call.interface("org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            const std::string interface_name = "org.mpris.MediaPlayer2.Player";
            const std::string property_name  = "MinimumRate";
            wi << interface_name;
            wi << property_name;
            ::DBus::Message ret = this->invoke_method (call);
            ::DBus::MessageIter ri = ret.reader ();
            ::DBus::Variant argout; 
            ri >> argout;
            return argout;
        };
        void MinimumRate( const double & input) {
            ::DBus::CallMessage call ;
             call.member("Set");  call.interface( "org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            ::DBus::Variant value;
            ::DBus::MessageIter vi = value.writer ();
            vi << input;
            const std::string interface_name = "org.mpris.MediaPlayer2.Player";
            const std::string property_name  = "MinimumRate";
            wi << interface_name;
            wi << property_name;
            wi << value;
            ::DBus::Message ret = this->invoke_method (call);
        };
        const double MaximumRate() {
            ::DBus::CallMessage call ;
             call.member("Get"); call.interface("org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            const std::string interface_name = "org.mpris.MediaPlayer2.Player";
            const std::string property_name  = "MaximumRate";
            wi << interface_name;
            wi << property_name;
            ::DBus::Message ret = this->invoke_method (call);
            ::DBus::MessageIter ri = ret.reader ();
            ::DBus::Variant argout; 
            ri >> argout;
            return argout;
        };
        void MaximumRate( const double & input) {
            ::DBus::CallMessage call ;
             call.member("Set");  call.interface( "org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            ::DBus::Variant value;
            ::DBus::MessageIter vi = value.writer ();
            vi << input;
            const std::string interface_name = "org.mpris.MediaPlayer2.Player";
            const std::string property_name  = "MaximumRate";
            wi << interface_name;
            wi << property_name;
            wi << value;
            ::DBus::Message ret = this->invoke_method (call);
        };
        const bool CanControl() {
            ::DBus::CallMessage call ;
             call.member("Get"); call.interface("org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            const std::string interface_name = "org.mpris.MediaPlayer2.Player";
            const std::string property_name  = "CanControl";
            wi << interface_name;
            wi << property_name;
            ::DBus::Message ret = this->invoke_method (call);
            ::DBus::MessageIter ri = ret.reader ();
            ::DBus::Variant argout; 
            ri >> argout;
            return argout;
        };
        const bool CanPlay() {
            ::DBus::CallMessage call ;
             call.member("Get"); call.interface("org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            const std::string interface_name = "org.mpris.MediaPlayer2.Player";
            const std::string property_name  = "CanPlay";
            wi << interface_name;
            wi << property_name;
            ::DBus::Message ret = this->invoke_method (call);
            ::DBus::MessageIter ri = ret.reader ();
            ::DBus::Variant argout; 
            ri >> argout;
            return argout;
        };
        const bool CanPause() {
            ::DBus::CallMessage call ;
             call.member("Get"); call.interface("org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            const std::string interface_name = "org.mpris.MediaPlayer2.Player";
            const std::string property_name  = "CanPause";
            wi << interface_name;
            wi << property_name;
            ::DBus::Message ret = this->invoke_method (call);
            ::DBus::MessageIter ri = ret.reader ();
            ::DBus::Variant argout; 
            ri >> argout;
            return argout;
        };
        const bool CanSeek() {
            ::DBus::CallMessage call ;
             call.member("Get"); call.interface("org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            const std::string interface_name = "org.mpris.MediaPlayer2.Player";
            const std::string property_name  = "CanSeek";
            wi << interface_name;
            wi << property_name;
            ::DBus::Message ret = this->invoke_method (call);
            ::DBus::MessageIter ri = ret.reader ();
            ::DBus::Variant argout; 
            ri >> argout;
            return argout;
        };
public:

    /* methods exported by this interface,
     * this functions will invoke the corresponding methods on the remote objects
     */
    void Previous()
    {
        ::DBus::CallMessage call;
        call.member("Previous");
        ::DBus::Message ret = invoke_method (call);
    }

    void Next()
    {
        ::DBus::CallMessage call;
        call.member("Next");
        ::DBus::Message ret = invoke_method (call);
    }

    void Stop()
    {
        ::DBus::CallMessage call;
        call.member("Stop");
        ::DBus::Message ret = invoke_method (call);
    }

    void Eject()
    {
        ::DBus::CallMessage call;
        call.member("Eject");
        ::DBus::Message ret = invoke_method (call);
    }

    void Play()
    {
        ::DBus::CallMessage call;
        call.member("Play");
        ::DBus::Message ret = invoke_method (call);
    }

    void Left()
    {
        ::DBus::CallMessage call;
        call.member("Left");
        ::DBus::Message ret = invoke_method (call);
    }

    void Right()
    {
        ::DBus::CallMessage call;
        call.member("Right");
        ::DBus::Message ret = invoke_method (call);
    }

    void Up()
    {
        ::DBus::CallMessage call;
        call.member("Up");
        ::DBus::Message ret = invoke_method (call);
    }

    void Down()
    {
        ::DBus::CallMessage call;
        call.member("Down");
        ::DBus::Message ret = invoke_method (call);
    }

    void Activate()
    {
        ::DBus::CallMessage call;
        call.member("Activate");
        ::DBus::Message ret = invoke_method (call);
    }

    void Root()
    {
        ::DBus::CallMessage call;
        call.member("Root");
        ::DBus::Message ret = invoke_method (call);
    }

    void Menu()
    {
        ::DBus::CallMessage call;
        call.member("Menu");
        ::DBus::Message ret = invoke_method (call);
    }

    void Pause()
    {
        ::DBus::CallMessage call;
        call.member("Pause");
        ::DBus::Message ret = invoke_method (call);
    }

    void ChapterP()
    {
        ::DBus::CallMessage call;
        call.member("ChapterP");
        ::DBus::Message ret = invoke_method (call);
    }

    void ChapterN()
    {
        ::DBus::CallMessage call;
        call.member("ChapterN");
        ::DBus::Message ret = invoke_method (call);
    }

    void TitleP()
    {
        ::DBus::CallMessage call;
        call.member("TitleP");
        ::DBus::Message ret = invoke_method (call);
    }

    void TitleN()
    {
        ::DBus::CallMessage call;
        call.member("TitleN");
        ::DBus::Message ret = invoke_method (call);
    }

    void PlayPause()
    {
        ::DBus::CallMessage call;
        call.member("PlayPause");
        ::DBus::Message ret = invoke_method (call);
    }

    void Seek(const int64_t& argin0)
    {
        ::DBus::CallMessage call;
        ::DBus::MessageIter wi = call.writer();

        wi << argin0;
        call.member("Seek");
        ::DBus::Message ret = invoke_method (call);
    }

    void OpenUri(const std::string& argin0)
    {
        ::DBus::CallMessage call;
        ::DBus::MessageIter wi = call.writer();

        wi << argin0;
        call.member("OpenUri");
        ::DBus::Message ret = invoke_method (call);
    }

    void SetPosition(const ::DBus::Path& argin0, const int64_t& argin1)
    {
        ::DBus::CallMessage call;
        ::DBus::MessageIter wi = call.writer();

        wi << argin0;
        wi << argin1;
        call.member("SetPosition");
        ::DBus::Message ret = invoke_method (call);
    }

    void SetAudioTrack(const int64_t& argin0)
    {
        ::DBus::CallMessage call;
        ::DBus::MessageIter wi = call.writer();

        wi << argin0;
        call.member("SetAudioTrack");
        ::DBus::Message ret = invoke_method (call);
    }

    void SetSubtitleTrack(const int64_t& argin0)
    {
        ::DBus::CallMessage call;
        ::DBus::MessageIter wi = call.writer();

        wi << argin0;
        call.member("SetSubtitleTrack");
        ::DBus::Message ret = invoke_method (call);
    }

    std::string GetSubtitleTrack()
    {
        ::DBus::CallMessage call;
        call.member("GetSubtitleTrack");
        ::DBus::Message ret = invoke_method (call);
        ::DBus::MessageIter ri = ret.reader();

        std::string argout;
        ri >> argout;
        return argout;
    }

    std::string GetAudioTrack()
    {
        ::DBus::CallMessage call;
        call.member("GetAudioTrack");
        ::DBus::Message ret = invoke_method (call);
        ::DBus::MessageIter ri = ret.reader();

        std::string argout;
        ri >> argout;
        return argout;
    }


public:

    /* signal handlers for this interface
     */

private:

    /* unmarshalers (to unpack the DBus message before calling the actual signal handler)
     */
};

} } } 
namespace org {
namespace mpris {
namespace MediaPlayer2 {

class TrackList_proxy
: public ::DBus::InterfaceProxy
{
public:

    TrackList_proxy()
    : ::DBus::InterfaceProxy("org.mpris.MediaPlayer2.TrackList")
    {
        connect_signal(TrackList_proxy, TrackListReplaced, _TrackListReplaced_stub);
        connect_signal(TrackList_proxy, TrackAdded, _TrackAdded_stub);
        connect_signal(TrackList_proxy, TrackRemoved, _TrackRemoved_stub);
        connect_signal(TrackList_proxy, TrackMetadataChanged, _TrackMetadataChanged_stub);
    }

public:

    /* properties exported by this interface */
        const std::vector< ::DBus::Path > Tracks() {
            ::DBus::CallMessage call ;
             call.member("Get"); call.interface("org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            const std::string interface_name = "org.mpris.MediaPlayer2.TrackList";
            const std::string property_name  = "Tracks";
            wi << interface_name;
            wi << property_name;
            ::DBus::Message ret = this->invoke_method (call);
            ::DBus::MessageIter ri = ret.reader ();
            ::DBus::Variant argout; 
            ri >> argout;
            return argout;
        };
        const bool CanEditTracks() {
            ::DBus::CallMessage call ;
             call.member("Get"); call.interface("org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            const std::string interface_name = "org.mpris.MediaPlayer2.TrackList";
            const std::string property_name  = "CanEditTracks";
            wi << interface_name;
            wi << property_name;
            ::DBus::Message ret = this->invoke_method (call);
            ::DBus::MessageIter ri = ret.reader ();
            ::DBus::Variant argout; 
            ri >> argout;
            return argout;
        };
public:

    /* methods exported by this interface,
     * this functions will invoke the corresponding methods on the remote objects
     */
    std::vector< std::map< std::string, ::DBus::Variant > > GetTracksMetadata(const std::vector< ::DBus::Path >& argin0)
    {
        ::DBus::CallMessage call;
        ::DBus::MessageIter wi = call.writer();

        wi << argin0;
        call.member("GetTracksMetadata");
        ::DBus::Message ret = invoke_method (call);
        ::DBus::MessageIter ri = ret.reader();

        std::vector< std::map< std::string, ::DBus::Variant > > argout;
        ri >> argout;
        return argout;
    }

    void AddTrack(const std::string& argin0, const ::DBus::Path& argin1, const bool& argin2)
    {
        ::DBus::CallMessage call;
        ::DBus::MessageIter wi = call.writer();

        wi << argin0;
        wi << argin1;
        wi << argin2;
        call.member("AddTrack");
        ::DBus::Message ret = invoke_method (call);
    }

    void RemoveTrack(const ::DBus::Path& argin0)
    {
        ::DBus::CallMessage call;
        ::DBus::MessageIter wi = call.writer();

        wi << argin0;
        call.member("RemoveTrack");
        ::DBus::Message ret = invoke_method (call);
    }

    void GoTo(const ::DBus::Path& argin0)
    {
        ::DBus::CallMessage call;
        ::DBus::MessageIter wi = call.writer();

        wi << argin0;
        call.member("GoTo");
        ::DBus::Message ret = invoke_method (call);
    }


public:

    /* signal handlers for this interface
     */
    virtual void TrackListReplaced(const std::vector< ::DBus::Path >& argin0, const ::DBus::Path& argin1) = 0;
    virtual void TrackAdded(const std::map< std::string, ::DBus::Variant >& argin0, const ::DBus::Path& argin1) = 0;
    virtual void TrackRemoved(const ::DBus::Path& argin0) = 0;
    virtual void TrackMetadataChanged(const ::DBus::Path& argin0, const std::map< std::string, ::DBus::Variant >& argin1) = 0;

private:

    /* unmarshalers (to unpack the DBus message before calling the actual signal handler)
     */
    void _TrackListReplaced_stub(const ::DBus::SignalMessage &sig)
    {
        ::DBus::MessageIter ri = sig.reader();

        std::vector< ::DBus::Path > arg0;
        ri >> arg0;
        ::DBus::Path arg1;
        ri >> arg1;
        TrackListReplaced(arg0, arg1);
    }
    void _TrackAdded_stub(const ::DBus::SignalMessage &sig)
    {
        ::DBus::MessageIter ri = sig.reader();

        std::map< std::string, ::DBus::Variant > arg0;
        ri >> arg0;
        ::DBus::Path arg1;
        ri >> arg1;
        TrackAdded(arg0, arg1);
    }
    void _TrackRemoved_stub(const ::DBus::SignalMessage &sig)
    {
        ::DBus::MessageIter ri = sig.reader();

        ::DBus::Path arg0;
        ri >> arg0;
        TrackRemoved(arg0);
    }
    void _TrackMetadataChanged_stub(const ::DBus::SignalMessage &sig)
    {
        ::DBus::MessageIter ri = sig.reader();

        ::DBus::Path arg0;
        ri >> arg0;
        std::map< std::string, ::DBus::Variant > arg1;
        ri >> arg1;
        TrackMetadataChanged(arg0, arg1);
    }
};

} } } 
#endif //__dbusxx__org_mpris_MediaPlayer2_vlc_h__PROXY_MARSHAL_H
