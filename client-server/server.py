#server file

import socket              

s = socket.socket()         
host = socket.gethostname() 
port = 12345                
s.bind((host, port))        

s.listen(5)
while True:
    c, addr = s.accept() 
    print('Got connection from\n')
    data = input('Enter the data you want to write to file:\n')
    c.send(data.encode())
    print(c.recv(1024))
    endd = input("Want to end: (y/n)\n ")
    if(endd=='y'):
        break
    else:
        continue
c.close()
