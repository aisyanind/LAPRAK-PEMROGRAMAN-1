#include <stdio.h>
int main ()
{
int A, A1, B, B1, C, C1, T, T1, K, K1, L, L1, Al, Al1;
printf("");
scanf("%d", &A);
printf("");
scanf("%d", &B);
C = sqrt(B*B - A*A);
Al = C;
T = A;
K = A + B + C;
L = 0.5*Al*T;
printf("\nAlas        = %d cm\n", Al);
printf("Tinggi      = %d cm\n", T);
printf("Keliling    = %d cm\n", K);
printf("Luas        = %d cm^2\n", L);

printf("");
scanf("%d", &A1);
printf("");
scanf("%d", &B1);
C1 = sqrt(B1*B1 - A1*A1);
Al1 = C1;
T1 = A1;
K1 = A1 + B1 + C1;
L1 = 0.5*Al1*T1;
printf("\nAlas        = %d cm\n", Al1);
printf("Tinggi      = %d cm\n", T1);
printf("Keliling    = %d cm\n", K1);
printf("Luas        = %d cm^2\n", L1);
}
