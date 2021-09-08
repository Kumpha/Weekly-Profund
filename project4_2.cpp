#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void triangle() {
	double area;
	float h,b;
	printf("Input Height :");
	scanf("%f", &h);

	printf("Input Base :");
	scanf("%f", &b);
	area = (0.5 * h * b);
	printf("Area is : %f", area);

}

int main() {
	triangle();
	return 0;

}
