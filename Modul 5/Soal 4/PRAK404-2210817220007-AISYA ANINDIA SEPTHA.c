#include <stdio.h>
int main ()
{
for (int a=1; a=5; a++)
    {int p; float b, s, d;
    printf("Pilih Program!\n");
    printf("1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\nMasukkan Pilihan : ");
    scanf("%d", &p);

    if (p == 1)
        {printf("Masukkan nilai pertama : ");
        scanf("%f", &s);
        printf("Masukkan nilai kedua : ");
        scanf("%f", &d);
        b = s+d;
        printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n", s, d, b);}

    else if (p == 2)
        {printf("Masukkan nilai pertama : ");
        scanf("%f", &s);
        printf("Masukkan nilai kedua : ");
        scanf("%f", &d);
        b = s-d;
        printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n\n", s, d, b);}

    else if (p == 3)
        {printf("Masukkan nilai pertama : ");
        scanf("%f", &s);
        printf("Masukkan nilai kedua : ");
        scanf("%f", &d);
        b = s*d;
        printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n\n", s, d, b);}

    else if (p == 4)
        {printf("Masukkan nilai pertama : ");
        scanf("%f", &s);
        printf("Masukkan nilai kedua : ");
        scanf("%f", &d);
        b = s/d;
        printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n", s, d, b);}

    else if (p == 5)
        {printf("Terimakasih, telah menggunakan kalkulator Aisya Anindia Septha\n\n");
        break;}

    else
        {printf("Input anda salah, silahkan coba lagi\n\n");}}
}

