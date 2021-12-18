
def frequencyTableAlt(alist):
    print("ITEM","FREQUENCY")
    slist = alist[:]
    slist.sort()
    
    countlist = [ ]
    
    previous = slist[0]
    groupCount = 0
    for current in slist:
        if current == previous:
            groupCount = groupCount + 1
            previous = current
        else:
            print(previous, "   ", groupCount)
            previous = current
            groupCount = 1

    print(current, "   ", groupCount)

frequencyTableAlt([3,3,5,7,1,2,5,2,3,4,6,3,4,6,3,4,5,6,6])
