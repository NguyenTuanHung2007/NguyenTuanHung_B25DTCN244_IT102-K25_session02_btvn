#include <stdio.h>

int main() {
    int a , b , c , d ;
    printf("Nhap số nguyên a: ");
    scanf("%d",&a);
    printf("Nhập số nguyên b: ");
    scanf("%d",&b);
    printf("Nhập số nguyên c: ");
    scanf("%d",&c);
    printf("Nhập số nguyên d: ");
    scanf("%d",&d);

    int A = a * b - 2 * c + 3 * (a - d);

    printf("a= %d b= %d c= %d d= %d\n", a, b, c, d);
    printf("A = %d\n", A);

    return 0;
}