#pragma once

#include <WinSock2.h>
#include <Windows.h>
#include "NetworkServices.h"
#include <WS2tcpip.h>
#include <stdio.h>
#include "NetworkData.h"

//size of our default buffer 
#define DEFAULT_BUFLEN 512

//default port to connect to
#define DEFAULT_PORT "27015"

//need to link with ws2_32.lib, MSWsock.lib and ADVapi32.lib
#pragma comment (lib, "ws2_32.lib")
#pragma comment (lib, "MSWsock.lib")
#pragma comment (lib, "AdvApi32.lib")

class ClientNetwork
{
public: 
	//for error checking function calles in winsock library
	int iResult;

	//socket for client to connect to server
	SOCKET connectSocket;
	ClientNetwork(void);
	~ClientNetwork(void);

};
