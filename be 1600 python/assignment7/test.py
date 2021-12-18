import json
import urllib.request
handle = urllib.request.urlopen("http://earthquake.usgs.gov/earthquakes/feed/v1.0/summary/4.5_month.geojson")
data = handle.read()
eD = json.loads(data)
eL = eD.get("features")


def mL(eD):
  pL = []
  eq = eD.get("features")
  for i in range(len(eq)):
    e = eq[i]
    c = e.get("coordinates")
    cs = tuple(c)
    pL.append(cs)
  return pL
pL = mL(eD)
for i,y in range(0,10):
  print(pL[i],pL[y])