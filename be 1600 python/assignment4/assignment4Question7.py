originalList = ['be', 'be', 'is', 'not', 'or', 'question', 'that', 'the', 'to', 'to']

def remove_duplicates(originalList):
    newList = []
    originalList.sort()
    print(originalList)

    for i in originalList:
        
        if i in newList:
            newList = newList
        else:
            newList = newList + [i]
    
    print(newList)

remove_duplicates(originalList)