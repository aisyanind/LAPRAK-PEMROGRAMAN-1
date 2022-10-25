#include <stdio.h>
int main ()
{
char a[50], b[50], c[50], d[50], e[50], f[50], g[50];
printf("Nama                    :");
gets(a);
printf("NIM                     :");
gets(b);
printf("Kelas Paralel           :");
gets(c);
printf("Tempat/Tanggal Lahir    :");
gets(d);
printf("Alamat                  :");
gets(e);
printf("Hobby                   :");
gets(f);
printf("No. HP                  :");
gets(g);

printf("\nNama                    :%s ", a);
printf("\nNIM                     :%s ", b);
printf("\nKelas Paralel           :%s ", c);
printf("\nTempat/Tanggal Lahir    :%s ", d);
printf("\nAlamat                  :%s ", e);
printf("\nHobby                   :%s ", f);
printf("\nNo. HP                  :%s ", g);
}
