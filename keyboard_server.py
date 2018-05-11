import serial
import socket
import picamera
import sys

serial = serial.Serial('/dev/ttyACM1', 9600)
         
server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
host = '192.168.1.29'
port = 6666
server.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
server.bind((host,port))
print('Bound to ', host, port)

while True:
    #establish connection
    server.listen(5)
    client, addr = server.accept()
    print('Connection from ', addr)
    
    while True:
        read_serial = serial.read()
        print(read_serial)
        
        client.sendall(read_serial)
    
    #stream has ended, close the connection
    client.close()
    