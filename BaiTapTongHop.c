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

    double S = ((pow(a,2)+sqrt(pow(b,2)+4*a*c))/2*a) - (pow(b,3)/pow(c,2)) + (sqrt(abs(a-b)));
    printf("S = %.2f\n", S);
    return 0;
}