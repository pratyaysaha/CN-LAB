## Question:

Write a sender and receiver program in C using connection less socket. Both of them will exchange messages with each other continuously, If any one of them will recieve the "exit" message from the other end then both of them will close the connection.

## Points to note

- Connection less that means UDP
- Strategy for UDP connection:
    - UDP client does not form a connection with the server like TCP and instead just sends a datagram. 
    - Server need accept a connection and just wails for datagram to arrive.
    - Datagrams upon arrival contian th address of the sender which the server uses to send to the correct client. 
- Server side
    - `socket()` - create new socket
    - declare the `socketadd_in` structure
    - using `memset()`, initialise the server and client socket address structure
    - give the necessary details to the address
    - `bind()` - bind the socket created with the socket address
    - use `sendto()` - send messages from one side to the other
    - use `recvfrom()` - recieve messages from other side to this side
- Client side
    - `socket()` - create new socket
    - declare the `socketadd_in` structure
    - using `memset()`, initialise the server and client socket address structure
    - give the necessary details to the address 
