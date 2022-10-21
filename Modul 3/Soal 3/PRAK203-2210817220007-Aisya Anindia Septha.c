#include <stdio.h>
int main ()
{
float a, a1, b, b1, i, i1, j, j1, x, x1, y, y1, hasil, hasil1;
scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);
hasil = (a-b)*(i/j)-(x+y);
printf("\n%.3f\n", hasil);

scanf("%f %f %f %f %f %f", &a1, &b1, &i1, &j1, &x1, &y1);
hasil1 = (a1-b1)*(i1/j1)-(x1+y1);
printf("\n%.3f\n", hasil1);
}
