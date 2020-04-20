#calculator server
import socket
import time
s = socket.socket()
host = socket.gethostname()
s.bind((host,12233))
s.listen(5)
c, addr = s.accept()
while True:
    c.send('1)Subtraction\n2)Addition\n3)Multiplication\n4)Division'.encode())
    opted =int.from_bytes(c.recv(1024),'little')
    #print(opted)
    vals = list(map(int,c.recv(1024).decode().split()))
    #print(vals)
    if(opted==1):
        c.send((vals[0]-vals[1]).to_bytes(4, 'little',signed = True))
    elif(opted==2):
        #print('sum')
        c.send((sum(vals)).to_bytes(2, 'little'))
    elif(opted==3):
        c.send((vals[0]*vals[1]).to_bytes(2, "little"))
    else:
        c.send((int(vals[0]/vals[1])).to_bytes(4, "little"))
    endd = c.recv(1024).decode()
    print(endd)
    if(endd=='y'):
        break
    elif(endd=='n'):
        pass
c.close()
s.close()
