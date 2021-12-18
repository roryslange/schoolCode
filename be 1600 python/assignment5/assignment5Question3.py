dic = {'a':15, 'c':35, 'b':10}

#print keys
print('keys:', end = ' ')
for i in dic:
    print(i, end=' ')

print()

#print values
print('values:', end=' ')
for i in dic.values():
    print(i, end=' ')

print()

#key value pairs
print('key value pairs', end=' ')
print()
for i in dic:
    print(i, dic[i])

print()

#key value pairs sorted by key
def sortedPairs(dic):
    global keylist
    keylist = []

    for i in dic:
        keylist += [i]

    keylist.sort()
    print('key value pairs sorted by key')

    for i in keylist:
        print(i, dic[i])
    

sortedPairs(dic)
print()


#key value pairs sorted by value
def sortByValues(dic):
    valuelist = []
    
    for i in dic:
        valuelist += [dic[i]]

    valuelist2 = valuelist.copy()
    valuelist2.sort(reverse=True)

    print('key value pairs sorted by value')
    
    for i in valuelist2:
        print(keylist[valuelist.index(i)], dic[keylist[valuelist.index(i)]])

sortByValues(dic)