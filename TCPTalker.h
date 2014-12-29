/*
 * UDPTalker.h
 *
 *  Created on: 28-Dec-2014
 *      Author: thorsten
 */

#ifndef UDPTALKER_H_
#define UDPTALKER_H_
#include <sys/socket.h>
#include <string.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <string>

class TCPTalker {
public:
	TCPTalker(int port);
	virtual ~TCPTalker();

	std::string listen();
	void response(std::string rsp);
private:
	struct sockaddr_in remaddr;
	int fd;
};

#endif /* UDPTALKER_H_ */
