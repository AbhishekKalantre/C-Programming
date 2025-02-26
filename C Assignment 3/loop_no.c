//Write a program that uses a loop to print the numbers from 101 to 110
#include<stdio.h>

int main()
{
    int n1, n2;

    printf("Enter Start Number :");
    scanf("%d" , &n1);
    printf("Enter End Number :");
    scanf("%d", &n2);
     
    for (int i = n1; i <= n2 ; i++ )
    {
        printf("%d\n",i);
    }
    return 0;

}