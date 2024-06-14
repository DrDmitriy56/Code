import keyboard
import time
def on_a_press():
    print("Boom boom - a - pressed")

keyboard.add_hotkey("ins", on_a_press)
while True:
    print("hahah")
    time.sleep(5)