#include <stdio.h>
int reverse(int d){
    int e;
    e = 0;
    while (d != 0){
        e = e * 10;
        e = e + d % 10;
        d = d/10;
        }
    return e;
}
int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    A = reverse (A);
    B = reverse (B);
    int C = A + B;
    printf("%d", reverse (C));
}
