#include<stdio.h>


int main(){
     int num1, num2, result ;

     printf("Enter the First number :");
     scanf("%d", &num1);

     printf("Enter the Second number :");
     scanf("%d", &num2);

     result = num1 + num2 ;

     printf("The result of adding %d is : %d\n",num1,num2,result);

     return 0;

}