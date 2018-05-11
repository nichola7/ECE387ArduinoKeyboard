import socket
import pyautogui

client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
host = '192.168.1.29' # ip of raspberry pi
port = 6666
client.connect((host, port))

run = True
msg = 'Received'
while run:

    data = client.recv(1024)
    str = data.decode()
    pyautogui.press(str)

client.close()