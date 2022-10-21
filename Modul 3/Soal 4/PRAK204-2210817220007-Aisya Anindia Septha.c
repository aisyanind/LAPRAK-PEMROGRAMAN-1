#include <stdio.h>
int main()
{
float r, r1, t, t1, V, V1, L, L1, K, K1, phi;
phi = 3.142857;
printf("");
scanf("%f", &r);
printf("");
scanf("%f", &t);
V = phi*(r*r)*t;
L = 2*phi*r*(r+t);
K = 2*phi*r;
printf("\nVolume      = %.2f\n", V);
printf("Luas        = %.2f\n", L);
printf("Keliling    = %.2f\n", K);

printf("");
scanf("%f", &r1);
printf("");
scanf("%f", &t1);
V1 = phi*(r1*r1)*t1;
L1 = 2*phi*r1*(r1+t1);
K1 = 2*phi*r1;
printf("\nVolume      = %.2f\n", V1);
printf("Luas        = %.2f\n", L1);
printf("Keliling    = %.2f\n", K1);
}
