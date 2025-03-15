#include<stdio.h>

int main ()
{
    int a , b , temp;
    printf("Enter the first number :");
    scanf("%d" ,&a);
    printf("enter the second number :");
    scanf("%d", &b);
    temp = a;;
    a = b;
    b = temp;
    printf("After swapping the first number is %d and the second number is %d" , a , b);
    return 0;
    
}