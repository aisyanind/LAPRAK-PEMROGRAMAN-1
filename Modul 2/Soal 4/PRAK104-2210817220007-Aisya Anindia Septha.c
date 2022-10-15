#include <stdio.h>
#include <string.h>
int main ()
{
float a, b, diskonA, diskonB, hargaA, hargaB;
char p = '%';
a = 400000;
b = 350000;
diskonA = a*13/100;
diskonB = b*21/100;
hargaA = a - diskonA;
hargaB = b - diskonB;
printf("Harga Sepatu A adalah %.0f\n", a);
printf("Harga Sepatu B adalah %.0f\n", b);
printf("Sepatu A mendapat diskon 13%c sehingga harganya menjadi %.0f\n", p, hargaA);
printf("Sepatu B mendapat diskon 21%c sehingga harganya menjadi %.0f\n", p, hargaB);
}
