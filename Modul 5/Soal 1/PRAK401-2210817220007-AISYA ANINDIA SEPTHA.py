for a in range (3) :
    b , c = input().split()
    b = int (b)
    c = str (c)
    for d in range (1,51) :
        if (d % b == 0) :
            print(c, end=' ')
        else :
            print(d, end=' ')
    print("\n")