import paho.mqtt.client as mqtt
import time
def on_log (client, userdata, level, msg):
    # print("Logged!!"+str(msg))
    pass

def on_connect (client, userdata, flags, rc):
    if rc == 0:
        print("Connected!!")
    else:
        print("Bad Connection!")

def on_message (client, userdata, msg):
    print("message :  " + msg.payload.decode())


client = mqtt.Client("calculator")
client.on_connect = on_connect
client.on_log = on_log
client.on_message = on_message
print("Establishing Connection!!")
client.connect('192.168.43.85', 8080, 60)
# client.loop_start()
client.subscribe("calc/welcome")
client.loop_forever()
