#include <stdio.h>

int main() {

    int c1;

    printf("Enter a letter between A and E:");
    scanf("%c", &c1);

    switch(c1){

        case 'A':
        case 'a':
        printf("the letter you entered: %c",c1);
        break;

        case 'B':
        case 'b':
        printf("the letter you entered: %c", c1);
        break;

        case 'C':
        case 'c':
        printf("the letter you entered: %c", c1);
        break;

        case 'D':
        case 'd':
        printf("the letter you entered: %c", c1);
        break;

        case 'E':
        case 'e':
        printf("the letter you entered: %c",c1);
        break;
        
        default:
        printf("Enter a value between A-E ");
        break;
    }

}