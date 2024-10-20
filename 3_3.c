#include <stdio.h>

int main()
{
    int a, c;
    float b, tong;
    
    printf("Nhap a:");
    scanf("%d", &a);
    
    printf("Nhap b:");
    scanf("%f", &b);
    
    printf("Nhap c:");
    scanf("%d", &c);
    
    tong = a + b + c;
    
    printf("%f\n", tong);
    printf("%f\n", tong / 3);
    
    return 0;
}