#include<stdio.h>
int main ()
{
    char ch;
    printf("Enter a Character:");
    scanf("%c",&ch);
    printf("The ASCII value of %c is %d in decimal",ch,ch);
    printf("\nThe ASCII value of %c is %o in octal",ch,ch);
    printf("\nThe ASCII value of %c is %x in hexadecimal",ch,ch);
    return 0;
}
//output:
// Enter a Character:A
// The ASCII value of A is 65 in decimal
// The ASCII value of A is 101 in octal 
// The ASCII value of A is 41 in hexadecimal
