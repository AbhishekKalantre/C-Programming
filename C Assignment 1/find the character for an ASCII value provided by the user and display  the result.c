#include <stdio.h>

int main() 
{
    int ascii_value;
    printf("Enter an ASCII value: ");
    scanf("%d", &ascii_value);
    
    char ch = (char)ascii_value;
    printf("The character for ASCII value %d is: %c\n", ascii_value, ch);
    
    return 0;
}