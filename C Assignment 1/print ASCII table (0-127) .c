#include<stdio.h>

int main ()
{
    printf("ASCII Table (0-127):\n");
    for (int i = 0; i < 128; i++) {
        printf("%3d: %c\n", i, i);
    }
    return 0;
}