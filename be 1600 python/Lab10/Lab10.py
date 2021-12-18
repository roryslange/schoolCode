wordsDict = {}

def concordance(inputFile):
    lis = []
    lineNum = 0
    f = open(inputFile, 'r')

    for aline in f.readlines():
        lis += [aline.split()]

    for aline in lis:
        lineNum += 1

        for word in aline:
            
            if word in wordsDict.keys():
                wordsDict[word].append(lineNum)

            else:
                wordsDict[word] = [lineNum]


    for word in wordsDict:
        print(word, 'appears in line(s)', end=' ')

        for i in wordsDict[word]:
            print(i, end=' ')

        print()
    


concordance('fruit.txt')