#include<stdio.h>
int main()
{
for (int b=1; b<=5; b++)
{int a;
printf("");
scanf("%d", &a);

if (a == 0)
    {printf("Nol");}

else if (a >= 1 && a <= 9)
    {printf("Satuan");}

else if (a >= 11 && a <= 19)
    {printf("Belasan");}

else if (a == 10)
    {printf("Puluhan");}

else if (a >= 20 && a <= 99)
     {printf("Puluhan");}

else {printf("Anda Menginput Melebihi Limit Bilangan");}

}
}
