#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    do {
        scanf("%d", &n);
    } while (n >= 8 || n < 0);

    for (i = 1; i <= n; ++i) {
        factorial *= i;
    }

    printf("%llu\n", factorial);
    return 0;
}

