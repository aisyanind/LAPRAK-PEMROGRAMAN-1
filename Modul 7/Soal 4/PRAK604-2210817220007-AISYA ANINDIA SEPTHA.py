a = input()
b = input()
c = 0
d = 0
print("")
if len(a) != len(b) :
    print("Panjang kalimat berbeda, pesan palsu")
else :
    for e in range (len(a)) :
        if " " in a[e] and " " in b[e] :
            continue
        if a[e] == b[e] :
            print("*", end='')
            c = c + 1
        else :
            print("#", end='') 
            d = d + 1
    print("\n* = ", c)
    print("# = ", d)
    if c >= d :
        print("Pesan Asli")
    else :
        print("Pesan Palsu")
print("")