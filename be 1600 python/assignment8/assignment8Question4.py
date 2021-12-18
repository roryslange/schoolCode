from cImage import *

def enhanceRed(myImage):

    height = myImage.getHeight()
    width = myImage.getWidth()

    print(height)
    print(width)

    newImage = EmptyImage(width, height)

    #create window
    myWin = ImageWin('Enhance Red', width*2, height)

    for row in range(height):
        for col in range(width):
            oldPixel = myImage.getPixel(col, row)

            red = oldPixel.getRed()
            if red >= 128:
                red = 127

            green = oldPixel.getGreen()
            blue = oldPixel.getBlue()

            newPixel = Pixel(red*2, green, blue)
            newImage.setPixel(col, row, newPixel)
            

    myImage.setPosition(0, 0)
    myImage.draw(myWin)
    newImage.setPosition(width + 1, 0)
    newImage.draw(myWin)

    myWin.exitOnClick()

enhanceRed(FileImage('butterfly.gif'))