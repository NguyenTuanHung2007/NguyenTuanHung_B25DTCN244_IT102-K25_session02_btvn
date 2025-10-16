#include <stdio.h>
int main(){
    int number;
    printf("Nhập số nguyên có từ 5 chữ số trở xuống: ");
    scanf("%d", &number);

    int d1 = number % 10;
    int d2 = (number / 10) % 10;
    int d3 = (number / 100) % 10;
    int d4 = (number / 1000) % 10;
    int d5 = (number / 10000) % 10;
    int result = d2 * 1000 + d3 * 100 + d4 * 10 + d5;

    printf("Chữ số cuối cùng bị tách: %d\n", d1);
    printf("Dãy đảo ngược: %d\n", result);
    
    return 0;
}