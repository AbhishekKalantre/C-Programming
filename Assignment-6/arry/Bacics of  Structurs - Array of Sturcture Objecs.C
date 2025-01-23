#include<stdio.h>

struct Stud
{
    int Roll_No;

    char Name[20];
    float per;
};

int main ()
{
    int i = 0;
    struct  Stud Std[3];

    for(i = 0; i < 3; i++)
    {
        printf("\n\n Enter Student No %d Details =>", i++);

        printf("\n\n Enter Roll Number =");
        scanf("%d", &Std[i].Roll_No);

        fflush(stdin);

        printf("\n Enter Name = ");
        gets(Std[i].Name);

        printf("\n Enter percentage = ");
        scanf("%f", &Std[i].per);



        /* data */
    }

    getch();
    system("cls");
    printf("\n\n =============================**************============================\n");

    printf("\n\t Student Database \n");

    for(i = 0; i < 3; i++){
        printf("\n\n%d Student Info Is =>", i+1);
        printf("\n Roll Number = %d", Std[i].Roll_No);
        printf("\n Name = %s.", Std[i].Name);
        printf("\n Percentage = %0.2f",Std[i].per);
    }
    printf("\n\n =============================**************============================\n");
    
    getch ();
    return 0;

    
    
}
