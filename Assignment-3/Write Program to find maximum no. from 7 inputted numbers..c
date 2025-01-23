#include <stdio.h>

int  main ()
{
    int numbers [7];
    int  i , max;

    printf("Enter 7 numbers :");
    for (i = 0; i < 7; i++)
    {
        printf("Number %d:", i+1);
        scanf("%d", &numbers[i]);
    }
    max = numbers[0];

    for (i = 1; i < 7; i++){
        if (numbers [i] > max)
        {
            max = numbers[i];
        }
    }
    printf("The max number is : %d\n", max);
    return 0;
}