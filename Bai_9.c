#include <stdio.h>
#include <math.h>

int main() {
    int a , b , c;
    printf("Nhap số nguyên a: ");
    scanf("%d",&a);
    printf("Nhập số nguyên b: ");
    scanf("%d",&b);
    printf("Nhập số nguyên c: ");
    scanf("%d",&c);

    double A = pow(a, 3) + pow(b, 2) + 2 * c + sqrt(a + b - c);
    printf("A = %.2f\n", A);

    return 0;
}