#include <stdio.h>

int main() {
    int n1, n2;

    printf("Number 1: ");
    scanf("%d", &n1);
    
    printf("Number 2: ");
    scanf("%d", &n2);

    if (n1 > n2) {
        printf("Max number is %d\n", n1);
    } 
    else if (n1 < n2) {
        printf("Max number is %d\n", n2);
    } 
    else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
