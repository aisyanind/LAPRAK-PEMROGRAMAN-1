def reverse (d) :
    return d[::-1]
a, b = input().split()
a = int (reverse (a))
b = int (reverse (b))
c = str (a + b)
print(int (reverse (c)))