import csv
import statistics

infile = open('iris.csv', 'r')
csvReader = csv.reader(infile)

titles = next(csvReader)

def findCol(colName):
  colNum = 0
  while colNum < len(titles) and titles[colNum] != colName:
    colNum += 1
  
  if colNum == len(titles):
    return -1
  else:
    return colNum



def petalLength():
  #print list of pedal lenths for a specific species

  #list of pedalLength
  global virginica
  global setosa
  virginica = []
  setosa = []
  #get column number of pedal length
  colNum = findCol('PetalLengthCm')

  for i in csvReader:
    if i[-1] == 'Iris-virginica':
      virginica += [float(i[colNum])]
    elif i[-1] == 'Iris-setosa':
      setosa += [float(i[colNum])]

  print('setosa petal length: ', setosa)
  print('virginica petal length: ', virginica)

petalLength()


def correlation(xList, yList):
    xBar = statistics.mean(xList)
    yBar = statistics.mean(yList)
    xStd = statistics.stdev(xList)
    yStd = statistics.stdev(yList)
    num = 0.0
    for i in range(len(xList)):
        num = num + (xList[i] - xBar) * (yList[i] - yBar)
        corr = num / ((len(xList) - 1) * xStd * yStd)
    return corr

print('coorelation between setosa and virginica: {0:.2f}'.format(correlation(virginica, setosa)))

