#include <stdio.h>
int MaxBilangan (int e, int f, int g, int h){
    if (e > f && e > g && e > h)
        return e;
    else if (f > e && f > g && f > h)
        return f;
    else if (f > e && g > f && g > h)
        return g;
    else if (h > e && h > f && h > g)
        return h;
}
int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int hasil = MaxBilangan (a, b, c, d);
    printf("%d", hasil);
    return 0;
}
