a, b = input().split()
a = int (a)
b = int (b)
c = []
d = 0
e = list(map(int, input().split()))
print()
for f in range (a) :
    c.append(e[d : d + b])
    d = d + b
for a in c :
    for f in a :
        print(f, end=' ')
    print()
print()