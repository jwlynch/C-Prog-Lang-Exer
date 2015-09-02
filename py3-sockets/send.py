# file send.py

import socket

server = socket.socket()

serverAddr = ("127.0.0.1", 1025, )

server.bind(serverAddr)

server.listen(0)

foo = server.accept()

print(foo)



