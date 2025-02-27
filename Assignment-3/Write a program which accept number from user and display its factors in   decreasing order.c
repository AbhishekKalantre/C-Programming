#include <stdio.h>

int main()
{
    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    for (int i = num; i >= 1; i--) 
    
    {
        if (num % i == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
