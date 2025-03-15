#include<stdio.h>

int main ()
{
    int num1 , num2, num3 ;
    int sum = 0;
    printf("Enter the marks of fist subjects: ");
    scanf("%d", &num1);
    printf("Enter the marks of second subjects: ");
    scanf("%d", &num2);
    printf("Enter the marks of third subjects: ");
    scanf("%d", &num3);
    sum = num1 + num2 + num3;
    printf("The sum of the mark of all three subjects is: %d" , sum);
    return 0;
}