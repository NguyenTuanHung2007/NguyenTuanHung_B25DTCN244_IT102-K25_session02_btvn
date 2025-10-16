
#include <stdio.h>
int main() {
    int a;
    int b;
    printf("Nhap so nguyen a: ");
    scanf("%d",&a);
    printf("Nhap so nguyen b: ");
    scanf("%d",&b);

    int sum = a + b;
    int diff = a - b;
    int prod = a * b;
    double quot = 0.0;

    printf("a = %d, b = %d\n", a, b);
    printf("Tổng: %d\n", sum);
    printf("Hiệu: %d\n", diff);
    printf("Tích: %d\n", prod);
    printf("Thương: %.2f\n", (double)a / b);
    return 0;
}