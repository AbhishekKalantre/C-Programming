#include <stdio.h>
#include <stdint.h>
#include<conio.h>

int main () {

    int mark[6];

    printf("Array Element : \n");
    for ( int i = 0; i <10; i++)
    {
        printf("mark[%d] = %d \n", i, mark[i]);
    }
    getch();
    return 0;


}