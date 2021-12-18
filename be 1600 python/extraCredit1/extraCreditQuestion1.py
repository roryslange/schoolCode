plainText = 'ABCDEFGHI'


print(len(plainText))


def threeRail(plainText):

    encrypt1 = ''
    encrypt2 = ''
    encrypt3 = ''
    cipherText = ''

    for i in range(2, len(plainText), 3):
        encrypt1 = encrypt1 + plainText[i]
    for i in range(1, len(plainText), 3):
        encrypt2 = encrypt2 + plainText[i]
    for i in range(0, len(plainText), 3):
        encrypt3 = encrypt3 + plainText[i]

    cipherText = encrypt1 + encrypt2 + encrypt3
    return cipherText

print(plainText)
print(threeRail(plainText))