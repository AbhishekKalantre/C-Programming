#include<stdio.h>

int main ()
{
    float temp_f , temp_c;
    printf("Enter the temperature in Fahrenheit :");
    scanf("%f" , &temp_f);
    temp_c = (temp_f - 32) * 5/9;
    printf("The temperature in Celsius is %f", temp_c);
    return 0;
    
}