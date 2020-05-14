import paho.mqtt.client as mqtt
import time
def on_message (client, userdata, msg):
    opt = msg.payload.decode()
    print("Got --> "+opt)
    try:
        opt = int(opt)
    except:
        pass
    if(opt==1):
        print("Addition")
    elif(opt==2):
        print("Substraction")
    elif(opt==3):
        print("Multiplication")
    elif(opt==4):
        print("Division")
    else:
        print("Invalid Input!!")

client = mqtt.Client("publisher")
client.on_message = on_message
client.connect('192.168.43.85', 8080, 60)
client.subscribe("calc/opts")
client.publish("calc/welcome", "Hi!! This is a mqtt-based calculator \nWhat operation do you want to perform? \n 1)Addition 2)Substraction\n 3)Multiplication 4)Division")
client.loop_forever()
# client.disconnect()
