#include<stdio.h>

int main(){
    
    printf("ASCII Table (0-127):\n");
    printf("-------------------\n");
    printf("Decimal\tCharacter\n");

    for (int i = 0; i <= 127; i++) {
        printf("%d\t\t%c\n", i, i);
    }

    return 0;
}
