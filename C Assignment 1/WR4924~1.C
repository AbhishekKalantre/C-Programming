#include <stdio.h>

int main()
{
    int n1, n2, n3, temp;

    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    printf("Enter third number: ");
    scanf("%d", &n3);
    temp = n1;
    n1 = n3;
    n3 = n2;
    n2 = temp;

    printf("After swapping:\n");
    printf("First number: %d\n", n1);
    printf("Second number: %d\n", n2);
    printf("Third number: %d\n", n3);

    return 0;
}