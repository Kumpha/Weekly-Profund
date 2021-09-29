#include <stdio.h>
 void km(){
 	    int meter;
 	    scanf("%d", &meter);
   		float kilometer;
   		kilometer = meter / 1000.0;
   		printf("\n Distance (Km) is %.3f\n", kilometer);
 }
int main()
{    
 	printf(" Enter distance (M): ");
	km();
    return 0;
}

