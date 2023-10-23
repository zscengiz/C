#include <stdio.h>

int main() {

    char c1, c2, c3, c4;
    
    printf("Enter 4 Different Char Values\n");
    scanf("%c%c%c%c",&c1,&c2,&c3,&c4);

    printf("Char 1 = %c\n", c1);
    printf("Char 2 = %c\n", c2);
    printf("Char 3 = %c\n", c3);
    printf("Char 4 = %c\n", c4);

    printf("Enter 4 Different Char Values\n");
    getchar();
    scanf("%c %c %c %c", &c1, &c2, &c3, &c4);

    printf("Char 1 = %c\n", c1);
    printf("Char 2 = %c\n", c2);
    printf("Char 3 = %c\n", c3);
    printf("Char 4 = %c\n", c4);

    return 0;

}