#include<stdio.h>
int main()
{
for (int a=1; a<=5; a++)
{int bil;
printf("");
scanf("%d", &bil);

if (bil >=80)
    {printf("A");}

else if (bil >= 70)
    {printf("B");}

else if (bil >= 60)
    {printf("C");}

else if (bil >= 50)
    {printf("D");}

else {printf("E");}
}
}
