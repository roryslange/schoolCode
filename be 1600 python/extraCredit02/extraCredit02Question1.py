#I took the poem from words.txt from another assignment and split it in half to make two different .txt files

# • It should write in output file a list of all the unique words contained in each file.
# • It should write in output file a list of all the unique words contained in both files.
# • It should write in output file a list of the words that appear in both files.
# • It should write in output file a list of the words that appear in the first file but not the second.
# • It should write in output file a list of the words that appear in the second file but not the first.
# • It should write in output file a list of the words that appear in either the first or second file but 

#must make sure that before you report solution to the txt file you convert to string
#fuctions are not made to print to string they are made to print to the terminal

#-------------------------------------------------------------------------------------------
#-------------------------------------------------------------------------------------------

import string

#create an output file
output = open('output.txt', 'w')

#functions to make things easier

def removePunctuation(words):   #removes punctuation and makes all characters lowercase
    new = []
    for i in words:
        i = i.lower()
        i = i.replace('\n', '')
        for ch in i:
            if ch in string.punctuation.replace("'", ''):
                i = i.replace(ch, '')
        new += [i]
    

    return new

def uniqueInList(words):
    wordcount = {} #provides a word count for each word
    unique = []

    for i in words:
        wordcount[i] = words.count(i)

    for i in wordcount:
        if wordcount[i] == 1:
            unique += [i]

    return unique

def makeWordList(file1,file2):
    words = []
    for aline in file1:
        words += aline.split(' ')
    for aline in file2:
        words += aline.split(' ')
    words = removePunctuation(words)

    #remove blank words
    while '' in words:
        words.remove('')
    
    return words

def makeWordDict(words):
    wordcount = {}
    for i in words:
        wordcount[i] = words.count(i)
    return wordcount

#-------------------------------------------------------------------------------------------

#functions for the problem

def uniqueEachFile(file1):
    words = [] #list of existing words
    wordcount = {} #provides a word count for each word
    unique = [] #list of unique words

    for aline in file1: #build list of words
        words += aline.split(' ')
    words = removePunctuation(words) #remove punctuation

    file1.close()

    #remove blank words
    while '' in words:
        words.remove('')



    #count how many times each element shows up in the file
    wordcount = makeWordDict(words)

    for i in wordcount:
        if wordcount[i] == 1:
            unique += [i]

    return unique



def uniqueBothFiles(file1, file2):
    #create one big list that can be passed through the previous function
    file1 = open('words.txt', 'r')
    file2 = open('words1.txt', 'r')

    words = makeWordList(file1,file2)

    # for aline in file1:
    #     words += aline.split(' ')
    # for aline in file2:
    #     words += aline.split(' ')
    # words = removePunctuation(words)

    while '' in words:
        words.remove('')

    return uniqueInList(words)

    

def wordsBothFiles(file1, file2):
    words = makeWordList(file1,file2)
    wordDict = makeWordDict(words)

    wordsInBoth = []

    for i in wordDict:
        wordsInBoth += [i]

    return wordsInBoth

def oneNotOther(file1, file2):
    #find files that are in the first file but not in the second file
    words1 = []
    words2 = []
    finalList = []
    for aline in file1:
        words1 += aline.split(' ')
    
    for aline in file2:
        words2 += aline.split(' ')
    
    words1 = removePunctuation(words1)
    words2 = removePunctuation(words2)

    while '' in words1:
        words1.remove('')

    while '' in words2:
        words2.remove('')

    for i in words2:
        while i in words1:
            words1.remove(i)

    for i in words1:
        if words1.count(i) > 1:
            words1.remove(i)
    
    return words1

def firstOrSecond():

    list1 = oneNotOther(open('words.txt', 'r'), open('words1.txt', 'r'))
    list2 = oneNotOther(open('words1.txt', 'r'), open('words.txt', 'r'))

    return list1 + list2





#-------------------------------------------------------------------------------------------
#-------------------------------------------------------------------------------------------

#output, uncomment this before turning in


# Problem Number 1

output.write('all unique words in a specific .txt file\n\n')
output.write('words.txt\n')
output.write(str(uniqueEachFile(open('words.txt', 'r'))))
output.write('\n')
output.write('words1.txt\n')
output.write(str(uniqueEachFile(open('words1.txt', 'r'))))
output.write('\n')
output.write('-----------------------------------------------------------------------------------------------')
output.write('\n\n')


# Problem Number 2
output.write('all unique words in both files \n\n')
output.write(str(uniqueBothFiles(open('words.txt', 'r'), open('words1.txt', 'r'))))
output.write('\n')
output.write('-----------------------------------------------------------------------------------------------')
output.write('\n\n')


# Problem Number 3
output.write('all words in both files\n')
output.write(str(wordsBothFiles(open('words.txt', 'r'), open('words1.txt', 'r'))))
output.write('\n')
output.write('-----------------------------------------------------------------------------------------------')
output.write('\n\n')

# Problem Number 4
output.write('return words that are in the first file but not the second\n')
output.write(str(oneNotOther(open('words.txt', 'r'), open('words1.txt', 'r'))))
output.write('\n')
output.write('-----------------------------------------------------------------------------------------------')
output.write('\n\n')

#problem Number 5 same as the last just reverse files
output.write('return words that are in the second file but not the first\n')
output.write(str(oneNotOther(open('words1.txt', 'r'), open('words.txt', 'r'))))
output.write('\n')
output.write('-----------------------------------------------------------------------------------------------')
output.write('\n\n')

#problem number 6
output.write('return words that appear in either the first or the second file but not both\n')
output.write(str(firstOrSecond()))



#-------------------------------------------------------------------------------------------

#what I should use to call the fuctions for this specific problem

# uniqueBothFiles(open('words.txt', 'r'), open('words1.txt', 'r'))
# wordsBothFiles(open('words.txt', 'r'), open('words1.txt', 'r'))
# firstNotSecond(open('words.txt', 'r'), open('words1.txt', 'r'))
# secondNotFirst(open('words.txt', 'r'), open('words1.txt', 'r'))
# firstOrSecond(open('words.txt', 'r'), open('words1.txt', 'r'))