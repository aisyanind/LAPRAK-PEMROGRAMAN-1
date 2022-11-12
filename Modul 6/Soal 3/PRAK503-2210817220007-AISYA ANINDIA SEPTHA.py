def maksimal (a, b) :
    if a > b : 
        return a
    else :
        return b
def minimal (a, b) :
    if a < b : 
        return a
    else : 
        return b
batas = 0
maks = -1000000
minim = 1000000
bilangan = int(input())
while batas < bilangan :
    nilai = map(int,input().split())
    for angka in nilai :
        maks = maksimal(maks, angka)
        minim = minimal(minim, angka)
        batas = batas + 1
print(maks, minim)