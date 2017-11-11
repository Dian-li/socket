//
// Created by dian on 17-10-23.
//

#ifndef SOCKET_CEPOLLSERVER_H
#define SOCKET_CEPOLLSERVER_H

#include <sys/epoll.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <fcntl.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <pthread.h>
#include <string.h>
#include <cstring>

#define _MAX_SOCKFD_COUNT 65535

class CEpollServer
{
public:
    CEpollServer();
    ~CEpollServer();

    bool InitServer(const char* chIp, int iPort);
    void Listen();
    static void ListenThread( void* lpVoid );
    void Run();

private:
    int        m_iEpollFd;
    int        m_isock;
    pthread_t       m_ListenThreadId;// 监听线程句柄

};
#endif //SOCKET_CEPOLLSERVER_H
