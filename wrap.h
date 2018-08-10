#ifndef _WRAP_H
#define _WRAP_H 

#include <socket.h>

void perr_exit(const char* s);

int Accept(int sockfd, struct sockaddr *addr, socklen_t *addrlen);

int Bind(int sockfd, const struct sockaddr *addr,socklen_t addrlen);

int Connect(int sockfd, const struct sockaddr *addr,socklen_t addrlen);

int Listen(int sockfd, int backlog);

int Socket(int domain, int type, int protocol);

ssize_t Read(int domain, int type, int protocol);

ssize_t Write(int fd, const void *buf, size_t count);

int Close(int fd);

ssize_t Readn(int fd,void* vptr,size_t n);

ssize_t Writen(int fd,const void* vptr,size_t n);

ssize_t my_read(int fd,char* ptr);

ssize_t Readline(int fd,void* vptr,size_t maxlen);

#endif




