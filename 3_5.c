#include <stdio.h>

int main(){
	float x,y,z;
	scanf("%f", &x);
	scanf("%f", &y);
	scanf("%f", &z);
	printf("%.6f\n", x+y+z);
	printf("%.6f\n", (x+y+z) / 3);
	return 0;
}
