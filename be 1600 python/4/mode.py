
def mode(alist):
    countdict = {}

    for item in alist:
        if item in countdict:
            countdict[item] = countdict[item]+1
        else:
            countdict[item] = 1
    print(countdict)
mode([1,2,3,1,5,1,4,5,5])


