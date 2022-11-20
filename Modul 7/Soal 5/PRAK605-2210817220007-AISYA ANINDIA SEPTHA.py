a = int (input())
b = []
print('Matriks A')
for c in range (a) :
    d = list (map(int, input().split()))
    b.append(d)
e = []
print('Matriks B')
for c in range (a) :
    d = list (map(int, input().split()))
    e.append(d)
print()
f = []
print('Matriks AXB')
for c in range (a) :
    f.append([])
    for g in range (a) :
        h = 0
        for d in range (a) :
            h = h + b[c][d] * e[d][g]
        f[c].append(h)
for i in f :
    for d in i :
        print(d, end=' ')
    print()
print()