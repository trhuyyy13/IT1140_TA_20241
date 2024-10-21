#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("ERROR\n");
        return 0;
    }

    printf("%d\n", gcd(a, b));
    printf("%d\n", lcm(a, b));
    return 0;
}

