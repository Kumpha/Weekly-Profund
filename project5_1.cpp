#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
    int number;
    int x, y;

    printf("Enter number : ");
    scanf("%d", &number);

    for (x = 0; x < number; x++)
    {
        for (y = 0; y < number; y++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
