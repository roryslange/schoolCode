def drawPolygon(myTurtle,sideLength,numSides):
    turnAngle = 360 / numSides
    for i in range(numSides):
        myTurtle.forward(sideLength)
        myTurtle.right(turnAngle)

def drawCircle(myTurtle,radius):
    circumference = 2 * 3.1415 * radius
    sideLength = circumference / 360
    drawPolygon(myTurtle,sideLength,360)

import turtle
t = turtle.Turtle()
t.up()
t.backward(200)
t.left(90)
t.down()
drawCircle(t,20)
drawCircle(t,200)
