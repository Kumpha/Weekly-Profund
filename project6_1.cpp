#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
    int number;
    int y;

    printf("Enter number : ");
    scanf("%d", &number);
        for (y = 0; y < number; y++)
        {
            printf("*");
        }
    return 0;
}
