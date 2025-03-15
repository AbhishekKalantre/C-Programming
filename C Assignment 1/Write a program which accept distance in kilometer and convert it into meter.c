#include<stdio.h>

int main ()
{
    float distance , meter ;
    printf ("Enter the distence in kilometer :");
    scanf("%f", &distance);
    meter = distance * 1000 ;
    printf("The distance in meter is %f" , meter);
    return 0 ;
    
}