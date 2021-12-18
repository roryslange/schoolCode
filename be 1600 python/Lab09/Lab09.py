from cImage import *

x = 3 #makes it easier to change x and y
y = 1

def scaleImage2(oldImage, x, y):
    oldW = oldImage.getWidth()
    oldH = oldImage.getHeight()

    newIm = EmptyImage(oldW * x, oldH * y)

    for row in range(newIm.getHeight()):
        for col in range(newIm.getWidth()):

            originalCol = col // x
            originalRow = row // y
            oldPixel = oldImage.getPixel(originalCol, originalRow)

            newIm.setPixel(col, row, oldPixel)

    return newIm

def makeScaleImage2(imageFile, x, y):
    oldImage = FileImage(imageFile)
    # width = oldImage.getWidth()
    # height = oldImage.getHeight()
    
    # myWin = ImageWin("General Scale", width * x, height * y)
    # oldImage.draw(myWin)
    
    newImage = scaleImage2(oldImage, x, y)
    width = newImage.getWidth()
    height = newImage.getHeight()
    myWin = ImageWin("General Scale", width, height)

    newImage.setPosition(0, 0)
    newImage.draw(myWin)

    myWin.exitOnClick()

makeScaleImage2("butterfly.gif", x, y)
