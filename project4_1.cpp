#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	float h, b, area;
	printf("Input Height :");
		scanf("%f", &h);

	printf("Input Base :");
		scanf("%f", &b);

	area = (0.5 * h * b);
	printf("Area is : %f",area);
	
	return 0;

}

