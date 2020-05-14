import paho.mqtt.client as mqtt
import time

def on_connect (client, userdata, flags, rc):
    if rc == 0:
        print("Connected!!")
    else:
        print("Bad Connection!")

def on_message (client, userdata, msg):
    print(msg.payload.decode())
    opt = input()
    client.publish("calc/opts",opt)


client = mqtt.Client("calculator")
client.on_connect = on_connect
client.on_message = on_message
print("Establishing Connection!!")
client.connect('192.168.43.85', 8080, 60)
client.subscribe("calc/welcome")
client.loop_forever()
