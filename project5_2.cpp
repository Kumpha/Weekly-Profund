#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void xy() {
    int x, y;
    int number;

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

}

int main()
{
    xy();
    return 0;
}

