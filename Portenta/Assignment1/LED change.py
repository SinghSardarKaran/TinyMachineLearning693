# Untitled - By: madhu - Wed Jan 26 2022

import pyb

redLED = pyb.LED(1)
greenLED = pyb.LED(2)
blueLED = pyb.LED(3)



while(True):
    blueLED.on()
    pyb.delay(500)
    blueLED.off()
    pyb.delay(500)
    redLED.on()
    pyb.delay(500)
    redLED.off()
    pyb.delay(500)
    greenLED.on()
    pyb.delay(500)
    greenLED.off()
    pyb.delay(500)


