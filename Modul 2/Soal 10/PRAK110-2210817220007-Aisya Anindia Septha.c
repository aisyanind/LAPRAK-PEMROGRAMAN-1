#include <stdio.h>
int main ()
{
float a, t, m, k, l;
a = 5;
t = 12;
printf("Diketahui : \n");
printf("Alas = %.0f cm \n", a);
printf("Tinggi = %.0f cm \n\n", t);
m = sqrt(a*a + t*t);
k = a + t + m;
l = 0.5*a*t;
printf("Jawab : \n");
printf("Sisi A = %.0f \n", a);
printf("Sisi B = %.0f \n", t);
printf("Sisi C = %.0f \n", m);
printf("Keliling = %.0f \n", k);
printf("Luas = %.0f \n", l);
}
