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

    double expression1 = (pow(a,2)+sqrt(pow(b,2)+4*a*c)) / (2*a);
    double expression2 = pow(b,3)/pow(c,2);
    double expression3 = sqrt(abs(a-b));
    double S = expression1 - expression2 + expression3;
    printf("S = %.2f\n", S);
    return 0;
}