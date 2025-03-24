#include <stdio.h>

int main() {
    int num, sum = 0, i;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &num);
        sum += num;
    }

    printf("The sum of the 10 numbers is: %d\n", sum);

    return 0;
}

//output
// Enter 10 numbers:5 84 56 94 82 94 82 94 82 94
// The sum of the 10 numbers is: 687    
// Enter 10 numbers:1 2 3 4 5 6 7 8 9 10
// The sum of the 10 numbers is: 55 
