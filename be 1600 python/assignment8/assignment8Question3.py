from cImage import *
import math

# circle equation
# x^2 + y^2 = r^2

#find y value
# y = math.sqrt(r^2 - x^2)

#define radius, find y, x is iterator



def makeCircle():
    circleImage = EmptyImage(720,720)
    bluePixel = Pixel(0, 0, 255)

    num = 180

    for i in range(360):
        print()
        circleImage.setPixel(int(math.cos(math.radians(i)) * 180 + 180), int(math.sin(math.radians(i)) * 180 + 180), bluePixel)
        

    myWin = ImageWin('Draw Circle', 720,720)

    circleImage.setPosition(180,180)
    circleImage.draw(myWin)

    myWin.exitOnClick()

makeCircle()


