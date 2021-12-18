
def frequencyTable(alist):
    countdict = {}

    for item in alist:
        if item in countdict:
            countdict[item] = countdict[item]+1
        else:
            countdict[item] = 1
    
    itemlist = list(countdict.keys())
    itemlist.sort()
    
    print("ITEM","FREQUENCY")
    
    for item in itemlist:
        print(item, "     ",countdict[item])

frequencyTable([3,3,5,7,1,2,5,2,3,4,6,3,4,6,3,4,5,6,6])
