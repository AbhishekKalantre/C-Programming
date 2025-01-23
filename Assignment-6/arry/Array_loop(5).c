#include<stdio.h>

int main (){

    int arr [7]={0};

    printf("Enter 7 Element:\n");
    for (int i = 0 ; i < 7; i++ ){
        printf("Enter value for arr[%d]:",i);
        scanf("%d" , &arr[i]);
        
    }
    
    printf("\nArray element are:\n");
    for (int i = 0; i < 7 ; i++) {
        printf("arr[%d] = %d\n", i , arr[i]);

    }
    return 0;

}