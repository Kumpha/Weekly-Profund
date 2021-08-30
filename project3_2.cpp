#include<stdio.h>
 
int main()
{
    int num, i, j;
      
    printf("  Enter number  : ");
    scanf("%d", &num);
     
    for(i=0; i<num; i++)
    {
        if (i==0 || i==num-1){
            printf("\t*");
            for(j=0; j<num-1; j++)
            {
                printf(" *");
            }
            printf("\n");
             
            continue;
        }
         
        printf("\t* ");
         
        for(j=0; j<num-2; j++)
        {
            printf("  ");
        }
         
        printf("*\n");
    }
     
    return 0;
}
