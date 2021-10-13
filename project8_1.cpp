#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	float weight, height,bmi;
	printf("BMI Calculator");
	printf("\nEnter your weight (kg) :");
	scanf("%f", &weight);
	printf("Enter your height (m) :");
	scanf("%f", &height);

	bmi = weight / (height * height);
	printf("Body mass index (BMI) is %.2f", bmi);

 	if(bmi>=0&&bmi<18.5)
		printf("\nUnderweight",bmi);

 	if(bmi>=18.5&&bmi<24.9)
		printf("\nNormal Weight", bmi);

 	if(bmi>=25&&bmi<29.9)
		printf("\nOverweight", bmi);

 	if(bmi>30)
		printf("\nObesity", bmi);

	return 0;
}
