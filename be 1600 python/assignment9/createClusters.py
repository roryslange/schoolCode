
import random

def createCentroids(k, dataDict):
    centroids=[]
    centroidCount = 0
    centroidKeys = []        #list of unique keys

    while centroidCount < k:
       rKey = random.randint(1, len(dataDict))
       if rKey not in centroidKeys:   #if key not already selected
           print(rKey)
           centroids.append(dataDict[rKey]) #add to dictionary
           centroidKeys.append(rKey)  #add key to selected keys
           centroidCount = centroidCount + 1


    return centroids

import math
def euclidD(point1, point2):
    sum = 0
    
    diff = (point1 - point2) ** 2
    sum = sum + diff
        
    euclidDistance = math.sqrt(sum)
    return euclidDistance

def createClusters(k, centroids, dataDict, repeats):
    for aPass in range(repeats):
        print("****PASS", aPass + 1, "****")
        clusters = []           #create list of k empty lists
        for i in range(k):
           clusters.append([])

        for aKey in dataDict:  #calculate distance to centroid
           distances = []
           for clusterIndex in range(k):
                dtoC = euclidD(dataDict[aKey], centroids[clusterIndex])
                distances.append(dtoC)

           minDist = min(distances)  #find minimum distance
           index = distances.index(minDist)

           clusters[index].append(aKey) #add to cluster

        # dimensions = len(dataDict)  #recompute the clusters
        # for clusterIndex in range(k):
        #    sums = [0] * dimensions     #init sum for each dimension
        #    for aKey in clusters[clusterIndex]:
        #        dataPoints = dataDict[aKey]
        #        for ind in range(len(dataPoints)): #calculate sums
        #            sums[ind] = sums[ind] + dataPoints[ind]
        #    for ind in range(len(sums)):  #calculate average
        #        clusterLen = len(clusters[clusterIndex])
        #        if clusterLen != 0:       #do not divide by 0
        #           sums[ind] = sums[ind] / clusterLen

        #    centroids[clusterIndex] = sums #assign avg to centroids

        for c in clusters:    #output the clusters
           print("CLUSTER")
           for key in c:
               print(dataDict[key], end = " ")
           print()

    return clusters

