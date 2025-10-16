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

    double expression1 = sqrt(pow(a,2) + pow(b,2)) / (c+1);
    double expression2 = (a*b)/c;
    double expression3 = sqrt(abs(a-b)+pow(c,2));

    double S = expression1 + expression2 - expression3;
    printf("S = %.2f\n", S);
    return 0;
}