# file receive.py

import socket

receiver = socket.socket()

serverAddr = ("127.0.0.1", 1025, )
clientAddr = ("127.0.0.1", 1026, )

#receiver.bind(clientAddr)

receiver.connect(serverAddr)

