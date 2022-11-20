#include <stdio.h>
#include <string.h>
int main()
{
int a, b, c, d, e, f;
e = 0;
f = 0;
char i[100], j[100];
scanf("%[^\n]%*c", &i);
scanf("%[^\n]%*c", &j);
printf("\n");
a = strlen(i);
b = strlen(j);
if(a != b)
    {printf("Panjang kalimat berbeda, pesan palsu\n");}
else
    {for(c=0; c<a; c++)
        {if (i[c] == ' ' && j[c] == ' ')
            {printf("");}
        else if(i[c] == j[c])
            {printf("*");
            e++;
            }
        else
            {printf("#");
            f++;
            }
        }
    printf("\n* = %d", e);
    printf("\n# = %d", f);
    if(c > d)
        {printf("\nPesan Asli\n");}
    else if(c < d)
        {printf("\nPesan Palsu\n");}
    }
return 0;
}
