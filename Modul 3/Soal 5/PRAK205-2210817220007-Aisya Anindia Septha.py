import math
A, B = input().split()
A = float (A)
B = float (B)
C = math.sqrt(B*B - A*A)
Al = C
T = A
K = A + B + C
L = 0.5*Al*T
print("\nAlas        = %.0f cm" %Al)
print("Tinggi      = %.0f cm" %T)
print("Keliling    = %.0f cm" %K)
print("Luas        = %.0f cm^2\n" %L)

A1 = float (input(""))
B1 = float (input(""))
C1 = math.sqrt(B1*B1 - A1*A1)
Al1 = C1
T1 = A1
K1 = A1 + B1 + C1
L1 = 0.5*Al1*T1
print("\nAlas        = %.0f cm" %Al1)
print("Tinggi      = %.0f cm" %T1)
print("Keliling    = %.0f cm" %K1)
print("Luas        = %.0f cm^2\n" %L1)