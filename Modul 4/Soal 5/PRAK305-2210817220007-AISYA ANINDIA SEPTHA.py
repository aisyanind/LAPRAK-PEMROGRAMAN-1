for a in range (5) :
    b = int (input())
    h = b % (86400*30)/86400
    j = (b % 86400)/3600
    m = b % 3600/60
    d = b % 60
    if h >= 1:
        print("%d hari" %h, "%.2d:" %j, "%.2d:" %m, "%.2d\n" %d)
    else :
        print("%.2d:" %j, "%.2d:" %m, "%.2d\n" %d)
