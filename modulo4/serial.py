#!/usr/bin/python

import socket

ip = "172.16.1.3"
porta = 45800

meusocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

meusocket.connect((ip,porta))
resultado = meusocket.recv(4096)
print resultado.split(" ")[2]

