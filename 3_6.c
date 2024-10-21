#include <stdio.h>
#define PI 3.14159

int main(){
	float r;
	scanf("%f", &r);
	printf("%.6f\n", 2*r*PI);
	printf("%.6f", r * r * PI);
	return 0;
}
