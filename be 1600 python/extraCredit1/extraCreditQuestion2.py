key = 'zyxwvutsrqponmlkjihgfedcba'
alphabet = 'abcdefghijklmnopqrstuvwxyz'
cipherText = "gsv jfrxp yildm ulc"



def substitutionDecrypt(cipherText, alphabet):
    plainText = ''
    cipherText = cipherText.lower()
    for ch in cipherText:
        if ch == ' ':
            plainText = plainText + ' '
        else:
            idx = key.find(ch)
            plainText = plainText + alphabet[idx]

    return plainText


print("cipher text: ", cipherText)
print("plain text : ", substitutionDecrypt(cipherText, alphabet))