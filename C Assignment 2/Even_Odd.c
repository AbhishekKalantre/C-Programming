#include<stdio.h>

int main (){
    int num = 0;

    printf("Enter a Number :");
    scanf("%d", &num);
    if  (num %2 == 0)
    {
        printf("Given Number Is Even : ");
    }
    else
    {
        printf("Given Number is Odd");
    }
    return 0;
}