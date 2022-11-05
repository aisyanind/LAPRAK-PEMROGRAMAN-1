for c in range (4) :
    a, b = input().split()
    a = int (a)
    b = int (b)
    d = a
    e = b
    if (a > b) :
        while d >= b and e <= a :
            print("%d" %d, "%d" %e, end = '')
            if (d == b) :
                break
            else :
                print(" - ", end =' ')
            d = d - 1
            e = e + 1
    if (a < b) :
        while d <= b and e >= a :
            print("%d" %d, "%d" %e, end = '')
            if (d == b) :
                break
            else :
                print(" - ", end =' ')
            d = d + 1
            e = e - 1
    print("\n")