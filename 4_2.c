#include <stdio.h>

int main() {
    int n, i, isPrime = 1;
    scanf("%d", &n);

    if (n <= 1) {
        printf("Khong phai la so nguyen to\n");
        return 0;
    }

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("La so nguyen to\n");
    else
        printf("Khong phai la so nguyen to\n");

    return 0;
}

