def median(alist):
    copylist = alist[:]  #make a copy using slice operator
    copylist.sort()
    if len(copylist)%2 == 0: #even length
        rightmid = len(copylist)//2
        leftmid = rightmid - 1
        median = (copylist[leftmid] + copylist[rightmid])/2.0
    else:     #odd length
        mid = len(copylist)//2
        median = copylist[mid]
    return median
