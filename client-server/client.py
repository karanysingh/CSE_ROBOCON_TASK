#client file

import socket            
import os
s = socket.socket()
host = socket.gethostname()

s.connect((host, 12345))
while True:
    t = s.recv(1024)
    print(t.decode())
    f = open('recv.txt', "w+")
    f.write(t.decode())
    s.send('Data Written Succesfully!!'.encode())
    f.close()
s.close()                   
