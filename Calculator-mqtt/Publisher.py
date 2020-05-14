import paho.mqtt.client as mqtt
import time
client = mqtt.Client("publisher")
client.connect('192.168.43.85', 8080, 60)
client.publish("calc/welcome", "Hi!!this is a mqtt based calculator")
# client.loop_forever()
client.disconnect()
