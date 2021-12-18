import json
import urllib.request
import turtle

#read json file
handle = urllib.request.urlopen(
    'https://earthquake.usgs.gov/earthquakes/feed/v1.0/summary/4.5_month.geojson')
data = handle.read()
eData = json.loads(data)

#get coords
def graphCoordinates(eData):
    
    earthquakes = eData.get('features')
    coordinates = ()

    #make window
    win = turtle.Screen()
    win.setworldcoordinates(-300, -300, 300, 300)

    #draw graph
    for i in range(4):
        t.goto(0,0)
        t.forward(200)
        t.right(90) 

    t.up()
    
    for i in range(len(earthquakes)):
        earthquake = earthquakes[i]
        properties = earthquake.get('geometry')
        coords = properties.get('coordinates')
        coordinates = (coords[0], coords[1])
        print(coordinates)

        #draw
        t.goto(coordinates[0], coordinates[1])
        t.dot(5)

    win.exitonclick()

t = turtle.Turtle()
graphCoordinates(eData)


