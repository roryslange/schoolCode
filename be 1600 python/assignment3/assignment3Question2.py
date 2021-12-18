str = ''
rep = int(0)

def repl(str, rep):
    print(str, ' -> ', end=' ')
    for i in range(rep):
        print(str, end='')

repl('hello', 3)