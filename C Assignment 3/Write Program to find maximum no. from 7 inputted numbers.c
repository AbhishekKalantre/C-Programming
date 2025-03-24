#include <stdio.h>

int main() {
    int num[7], max, i;

    printf("Enter 7 numbers: ");
    for (i = 0; i < 7; i++) {
        scanf("%d", &num[i]);
    }

    max = num[0];
    for (i = 1; i < 7; i++) {
        if (num[i] > max) {
            max = num[i];
        }
    }

    printf("The Maximum Number is: %d\n", max);

    return 0;
}
