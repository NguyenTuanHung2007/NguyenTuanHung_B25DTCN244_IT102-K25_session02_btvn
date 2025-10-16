#include <stdio.h>
int main() {
    int a;
    int b;
    float c;
    printf("Nhap số nguyên a: ");
    scanf("%d",&a);
    printf("Nhập số nguyên b: ");
    scanf("%d",&b);
    printf("Nhập số thực c: ");
    scanf("%f",&c);

    float tong_thuc = a + b + c;
    int tong_nguyen = a + b + (int)c;

    printf("a = %d\nb = %d\nc = %.2f\n", a, b, c);
    printf("Tổng (float) = %.2f\n", tong_thuc);
    printf("Tổng phần nguyên (int) = %d\n", tong_nguyen);

    return 0;
}