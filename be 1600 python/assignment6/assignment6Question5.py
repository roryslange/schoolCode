import string
# f = open('words.txt', 'r')
alphabet = dict.fromkeys(string.ascii_lowercase, 0)
characters = ''



def freqLetter(f):
    characters = f.read()
    characters = characters.lower()
    characters = list(characters)
    for ch in characters:

        if ch in alphabet:
            alphabet[ch] += 1
    print('letter count')
    
    for ch in alphabet.keys():
        print('{0:10}{1:}'.format(ch, alphabet[ch]))



        
freqLetter(open(input('enter file name: '), 'r'))