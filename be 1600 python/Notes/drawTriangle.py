    
def drawTriangle(myTurtle,sideLength):
    for i in range(3):
        myTurtle.forward(sideLength)
        myTurtle.right(120)

import turtle
t = turtle.Turtle()
drawTriangle(t,150) 
