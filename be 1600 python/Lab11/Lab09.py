def readNames(players):
    acc = 0
    scores = []
    names = []

    while acc != players:
        name = input('Enter the name of the player: ')
        score = int(input('Enter the golf score: '))
        scores += [score]
        names += [name]
        acc += 1
    
    # write to a .txt file

    print(scores)

    
    with open('golf.txt', 'w') as f:
        for i in range(players):
            f.write('name: ')
            f.write(str(names[i]))
            f.write('\n')
            f.write('score: ')
            f.write(str(scores[i]))
            f.write('\n')
            
        f.close()

    with open('golf.txt', 'r') as f:
        for aline in f:
            print(aline)

    print('min score: ', min(scores))
    print('max score: ', max(scores))

readNames(4)

    
    