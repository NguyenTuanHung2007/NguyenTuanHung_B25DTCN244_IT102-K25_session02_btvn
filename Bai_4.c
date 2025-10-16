#include <stdio.h>

int main() {
    int length;
    int width;
    printf("Nhập chiều dài: ");
    scanf("%d",&length);
    printf("Nhập chiều rộng: ");
    scanf("%d",&width);


    int perimeter = 2 * (length + width);
    int area = length * width;


    printf("Length = %d\n", length);
    printf("Width = %d\n", width);
    printf("Perimeter = %d\n", perimeter);
    printf("Area = %d\n", area);

    return 0;
}