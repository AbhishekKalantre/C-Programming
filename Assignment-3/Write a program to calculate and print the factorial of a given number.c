#include<stdio.h>
 
 
    unsigned long long functorial(int n)
    {
            if (n == 0 || n == 1)
    {
        return 1;
    }
    return n* factorial(n - 1);

 }

 int main (){
    int num;

    printf("Enter a positive number :");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("factorial is not definde for nagative number.\n");


    }
    else
    {
        printf("factorial of %d is %llu\n",num , factorial(num));

    }
    return 0;
 }