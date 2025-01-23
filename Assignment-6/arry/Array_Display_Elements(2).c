# include <stdio.h>

int main ()
{
    int mark[] = { 56, 84 , 64, 48, 79, 73};
    int size = sizeof(mark);
    int size = sizeof(mark[0]);

    printf("Array elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter mark[$d] = %d\n , i, mark[i]");
    }
    getch();
    return 0;

}