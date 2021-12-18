import math
import random
import turtle

#figure out if point is in circle
def inCircle(radius, numDarts, t):
    
    #set size of window
    win = turtle.Screen()
    win.setworldcoordinates(-2, -2, 2, 2)

    t.up()
    t.goto(0, 1)
    t.down()
    t.goto(0, -1)
    t.up()
    t.goto(1, 0)
    t.down()
    t.goto(-1, 0)




    for i in range(numDarts + 1):
        x = random.uniform(-1,1) #get x and y values
        y = random.uniform(-1,1)

        #turtle
        t.up()
        t.goto(x, y)
        t.down()
        
    
        #put them in radius equation

        radius = math.sqrt(x**2 + y**2)

        if radius <= 1:
            #print("in x= ", x, " y= ", y)
            t.dot(10, "blue")
        else:
            #print("out x= ", x, " y= ", y)
            t.dot(10, "red")

        #figure out if they are in the circle not

t = turtle.Turtle()



inCircle(1, 100, t)


