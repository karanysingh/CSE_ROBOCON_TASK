import socket
s = socket.socket()
host = socket.gethostname()
s.connect((host, 12233))
while True:
    print(s.recv(1024).decode())
    opt = int(input(':'))
    s.send(opt.to_bytes(2, 'little'))
    vals = input('Enter two values:\n')
    if(len(vals.split())==2):
        s.send(vals.encode())
        print("Answer --> ",end=" ")
        print(int.from_bytes(s.recv(1024), 'little',signed =True))
    else:
        print("Invalid Input!!\n")
    endd = input('Do you want to end?(y/n)')
    s.send(endd.encode())
    if(endd=='y'):
        break
    elif(endd=='n'):
        pass
s.close()
