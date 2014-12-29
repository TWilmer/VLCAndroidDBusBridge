/*
 * UDPTalker.cpp
 *
 *  Created on: 28-Dec-2014
 *      Author: thorsten
 */

#include "TCPTalker.h"

#include <unistd.h>

TCPTalker::TCPTalker(int port) {

	struct sockaddr_in myaddr;
	memset((char *)&myaddr, 0, sizeof(myaddr));
	myaddr.sin_family = AF_INET;
	myaddr.sin_addr.s_addr = htonl(INADDR_ANY);
	myaddr.sin_port = htons(4001);
	if ((fd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
		perror("cannot create socket\n");
		fd=0;
	}
#ifdef SO_REUSEPORT

	int optval = 1;
	setsockopt(fd, SOL_SOCKET, SO_REUSEPORT, &optval, sizeof(optval));

#endif
	if (bind(fd, (struct sockaddr *)&myaddr, sizeof(myaddr)) < 0) {
		perror("bind failed");
		fd=0;
	}



}
std::string TCPTalker::listen()
{
	std::string ret;



	char buf[1024];
	socklen_t addrlen = sizeof(remaddr);
	int recvlen = recvfrom(fd, buf, sizeof(buf), 0, (struct sockaddr *)&remaddr, &addrlen);
	if (recvlen > 0) {
		buf[recvlen] = 0;
		ret=buf;
	}
	printf("received %d bytes\n", recvlen);
	printf("received message: \"%s\"\n", ret.c_str());
	return ret;
}
void TCPTalker::response(std::string rsp)
{
	int sent=sendto(fd,rsp.c_str(),rsp.length(),0 , (struct sockaddr *)&remaddr, sizeof(remaddr) );
	printf("Sent %d\n", sent);
}
TCPTalker::~TCPTalker() {
	close(fd);
}


