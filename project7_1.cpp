#include <stdio.h>
 
int main()
{
    int meter;
    float kilometer;
     
    printf(" Enter distance (M): ");
    scanf("%d", &meter);
     
    kilometer = meter / 1000.0;
     
    printf("\n Distance (Km) is %.3f\n", kilometer);
   
    return 0;
}

