
def mode(alist):
    countdict = {}
    
    for item in alist:
        if item in countdict:
            countdict[item] = countdict[item]+1
        else:
            countdict[item] = 1
            
    countlist = countdict.values()
    maxcount = max(countlist)
    
    modelist = [ ]
    for item in countdict:
        if countdict[item] == maxcount:
            modelist.append(item)
    
    return modelist
print (mode([1,2, 3,1,5,6,5]))
