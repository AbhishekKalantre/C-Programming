#include<stdio.h>

int main ()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        for (char i = ch; i <= 'Z'; i++) {
            printf("%c ", i);
        }
        printf("\n");
    } else if (ch >= 'a' && ch <= 'z') {
        for (char i = ch; i >= 'a'; i--) {
            printf("%c ", i);
        }
        printf("\n");
    } else {
        return 0;
    }
    return 0;
}

//output
// Enter a character: H
// H I J K L M N O P Q R S T U V W X Y Z
// Enter a character: A 
// A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
// Enter a character: a
// a b c d e f g h i j k l m n o p q r s t u v w x y z
