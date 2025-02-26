#include<stdio.h>

int main ()
{
    int n;
    printf("Enter a Number :");
    scanf("%d" ,&n);

    if (n > 0)
    {
        printf("Given Number %d Is Positive :", n );
    }
    else if (n<0)
    {
        printf("Given Number %d Is Nagative", n);
    }
    return 0;
}