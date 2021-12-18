def mean(alist):
    mean = sum(alist) / len(alist)
    return mean
import math
def standardDev(alist):
    theMean = mean(alist)
    
    sum = 0
    for item in alist:
        difference = item - theMean
        diffsq = difference ** 2
        sum = sum + diffsq
        
    sdev = math.sqrt(sum/(len(alist)-1))
    return sdev


print (standardDev ( [2,3,4,5,6,6,7,2,3] ))

