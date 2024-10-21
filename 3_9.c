#include <stdio.h>
#include <math.h>

int main() {
    double X, Y, F;
    
    scanf("%lf %lf", &X, &Y);
    
    F = pow(Y, 6) + X * pow(Y, 5) + pow(X, 2) * pow(Y, 4) +
        pow(X, 3) * pow(Y, 3) + pow(X, 4) * pow(Y, 2) +
        X * pow(Y, 1) + pow(X, 6);
    
    printf("%.6lf\n", F);
    return 0;
}
