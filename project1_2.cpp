#include <stdio.h>
int main(){
    int x,y,z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    printf("%d", x * (x >= y && x >= z) + y * (y > x && y >= z) + z * (z > x && z > y));
    return 0;
}