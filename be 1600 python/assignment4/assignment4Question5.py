def letterCount(userInput):

    userInput.lower()

    totalChr = []
    allChr = []
    counter = []

    for i in userInput: #put all characters in alphabetical list
        totalChr += [i]
    totalChr.sort()

    for i in totalChr: #which characters are used and are to be counted.
        if i in allChr:
            allChr = allChr
        else:
            allChr += [i]
            counter += [0]

    for i in totalChr: #count characters
        for chr in range(len(allChr)):
            if i == allChr[chr]:
                counter[chr] += 1

    print(totalChr) #test list prints
    print(allChr)
    print(counter)

    most = counter.index(max(counter)) #returns the index of the most used character

    print('your string: ', userInput)
    print('the most common letter in your string is: ', allChr[most].upper())

letterCount(input('what is your string: '))