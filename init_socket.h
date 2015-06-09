/*file :init_socket.h*/
#ifndef INIT_SOCKET_H
#define INIT_SOCKET_H
#include <netinet/in.h>

#define BACKLOG 20 //length of listening queue on socket
#define PORT 8080
/*initialize the socket on server ,include below
socket()
bind()
listen()
*/

/*listen_fd: the web server listen file descriptor
       server_addr:the web server ipv4 address
       return: sucess on 0,error on -1
*/

int init_socket(int *listen_fd,struct sockaddr_in *server_addr);

#endif
