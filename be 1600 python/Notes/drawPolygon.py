
def drawPolygon(myTurtle,sideLength,numSides):
    turnAngle = 360 / numSides
    for i in range(numSides):
        myTurtle.forward(sideLength)
        myTurtle.right(turnAngle)

import turtle
t = turtle.Turtle()
t.up()
t.backward(200)
t.left(90)
t.down()
drawPolygon(t,5,100)
