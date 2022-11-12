def reverse (d) :
    e = 0
    while (int (d)) :
        e = e * 10
        e = e + int (d) % 10
        d = d/10
    return e
a, b = map(int,input().split())
a = reverse (a)
b = reverse (b)
c = a + b
print(reverse (c))