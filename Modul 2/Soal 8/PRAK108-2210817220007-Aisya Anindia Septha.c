#include <stdio.h>
int main ()
{
float a, b, c, phi, hasil;
a = 5;
b = 14;
phi = 3.14;
printf("Diketahui : \n");
printf("Pak Dengklek mengelilingi taman = %.0f Putaran \n", a);
printf("Jarak tempuh Pak Dengklek = %.0f Kilometer \n\n", b);
c = b/a;
hasil = c/(phi*2);
printf("Jawaban : \n");
printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer \n", hasil);
}
