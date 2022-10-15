import math
a = 5
t = 12
print("Dketahui :")
print("Alas =", a, "cm")
print("Tinggi =", t, "cm \n")

m = math.sqrt(a*a + t*t)
k = a + t + m
l = 0.5*a*t

print("Jawab :")
print("Sisi A =", a)
print("Sisi B =", t)
print("Sisi C =", round (m))
print("Keliling =",round (k))
print("Luas =", round (l))