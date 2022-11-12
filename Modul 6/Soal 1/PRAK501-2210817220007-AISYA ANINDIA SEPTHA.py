def MaxBilangan(e, f, g, h) :
    e = int(e); f = int(f); g = int(g); h = int(h)
    if (e > f and e > h and e > h) :
        return e
    elif (f > e and f > g and f > h) :
        return f
    elif (g > e and g > f and g > h) :
        return g
    elif (h > e and h > f and h > g) :
        return h
a, b, c, d = input().split()
a = int (a)
b = int (b)
c = int (c)
d = int (d)
hasil = MaxBilangan(a, b, c, d)
print(hasil)