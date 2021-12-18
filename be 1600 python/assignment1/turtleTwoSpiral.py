import turtle

def drawSpiral(myTurtle,maxSide):
    for sideLength in range(1,maxSide+1,5):
        myTurtle.forward(sideLength)
        myTurtle.right(90)

            

myTurtle = turtle.Turtle()
drawSpiral(myTurtle,150) 

t2 = turtle.Turtle()
t2.up()
t2.goto(0,-150)
t2.down()

drawSpiral(t2, 150)