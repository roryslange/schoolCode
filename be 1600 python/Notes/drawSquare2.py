def drawSquare2(myTurtle,sideLength):
    for i in range(4):
        myTurtle.forward(sideLength)
        myTurtle.right(90)

import turtle
t = turtle.Turtle()
drawSquare2(t,150) 
