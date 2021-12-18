def histogram(string):
    string = string.upper()
    string = string.replace(' ', '')
    letters = []
    counter = {}

    for i in string:
        letters = letters + [i]
    
    letters.sort()

    for i in letters:
        counter[i] = string.count(i)

    print(string)
    print()

    for i in counter.keys():
        print(i, end=' ')

        for a in range(counter.get(i)):
            print('*', end='')
            
        print()
    


    # return print(string, counter)

histogram('to be or not to be')
