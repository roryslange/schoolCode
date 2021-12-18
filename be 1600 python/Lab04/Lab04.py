def modifyStr(str):
    newStr = ''
    cCounter = 0
    str = str.upper()
    
    for ch in str[1:-1]:
        if ch != 'A' and ch != 'E' and ch != 'I' and ch != 'O' and ch != 'U' and ch != ' ':
            ch = '*'
            cCounter = cCounter + 1
        elif ch == ' ':
            ch = ' '
        newStr = newStr + ch

        
    print('OLD STRING: ', str)
    print('NEW STRING: ', newStr)
    print('NUMBER OF CONSONANTS: ', cCounter)

modifyStr(input('ENTER A STRING: '))