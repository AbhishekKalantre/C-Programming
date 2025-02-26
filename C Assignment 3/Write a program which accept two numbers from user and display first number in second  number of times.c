#include<stdio.h>

int main (){
     int num ,times ;
     printf("Enter the first number:");
     scanf("%d", &num);

     printf("Enter the second number :");
     scanf("%d" , &times);

     if (times <= 0)
     {
        printf("second number must br greater than 0.\n");
        return 1;

     }
     printf("Displaying the first number %d times:\n", times);
     for (int i = 0; i < times; i++)
     {
        printf("%d\n", num);
     }
     return 0;
}