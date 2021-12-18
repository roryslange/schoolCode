def getMax(alist):
    maxSoFar = alist[0]
    for pos in range(1,len(alist)):
        if alist[pos] > maxSoFar:
            maxSoFar = alist[pos]

    return maxSoFar
