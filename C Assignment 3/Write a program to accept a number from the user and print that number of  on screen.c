#include <stdio.h>

int main ()
{
int num;

 printf("Enter the number of * to print: ");
scanf("%d", &num);

for (int i = 0 ; i <= num; i++)
{
    printf("*\n");

}
return 0;


}