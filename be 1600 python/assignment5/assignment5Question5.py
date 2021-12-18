#(num, denom)

def fractionAdd(frac1, frac2):
    totalnum = (frac1[0] * frac2[1] + frac1[1] * frac2[0])
    totaldenom = (frac1[1] * frac2[1])
    totalfrac = (totalnum, totaldenom)
    print(frac1, '+', frac2, '=', end=' ')
    return totalfrac

def fractionMult(frac1, frac2):
    totalnum = (frac1[0] * frac2[0])
    totaldenom = (frac1[1] * frac2[1])
    totalfrac = (totalnum, totaldenom)
    print(frac1, '*', frac2, '=', end=' ')
    return totalfrac

print(fractionAdd((1, 2), (3, 4)))
print(fractionMult((1, 2), (3, 4)))
