#include <stdio.h>
#include <math.h>

int main(void) {
    int a , b , c;
    printf("Nhap số nguyên a: ");
    scanf("%d",&a);
    printf("Nhập số nguyên b: ");
    scanf("%d",&b);
    printf("Nhập số nguyên c: ");
    scanf("%d",&c);

    double S = (sqrt(pow(a,2) + pow(b,2)) / (c+1)) + ((a * b) / c) - (sqrt(abs(a - b) + pow(c,2)));
    printf("S = %.2f\n", S);
    return 0;
}