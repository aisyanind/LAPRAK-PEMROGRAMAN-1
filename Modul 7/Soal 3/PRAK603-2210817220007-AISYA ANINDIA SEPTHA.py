a, b = input().split()
a = int (a)
b = int (b)
if (a != b) :
    print("Jumlah tidak sama")
    print()
else :
    c = list (map (int, input().split()))
    d = list (map (int, input().split()))
    print("")
    for e in range (a) :
        f = c[e] * d[e]
        print(f, end=' ')
    print("\n")