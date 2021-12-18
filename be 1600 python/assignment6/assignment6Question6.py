def sortByAuthor(f):
    
    

    booksAndAuthors = []
    organizedDic = {}

    for aline in f:
        booksAndAuthors += aline.split(',')

    f.close()

    for i in range(1,len(booksAndAuthors),2):
        if organizedDic.get(booksAndAuthors[i].strip(), -1) == -1:
            organizedDic[booksAndAuthors[i].strip()] = [booksAndAuthors[i-1]]
        else: organizedDic[booksAndAuthors[i].strip()].append(booksAndAuthors[i-1])

    # print(organizedDic)


    for i in organizedDic.keys():
        print('{0:30s}{1:}'.format(i, organizedDic[i]))


sortByAuthor(open('books.txt', 'r'))
    