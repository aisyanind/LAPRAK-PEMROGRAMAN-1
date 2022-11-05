for a in range (3) :
    b = int(input(""))
    for c in range (1, b + 1) :
        if(c % 2 == 1) :
            print(c, end=' ')
    print("")
    for c in reversed (range (1, b + 1)) :
        if (c % 2 == 0) :
            print(c, end=' ')
    print("\n")