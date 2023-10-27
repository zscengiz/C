#include <stdio.h>

int main() {

    int c1;

    printf("Enter a letter between A and E: ");
    scanf("%c", &c1);

    if(c1 == 'A' || c1 == 'a')
            printf("the letter you entered: %c", c1);
    
    else if(c1 == 'B' || c1 == 'b')
            printf("the letter you entered: %c", c1);

    else if(c1 == 'C' || c1 == 'c')
            printf("the letter you entered: %c", c1);

    else if(c1 == 'D' || c1 == 'd')
            printf("the letter you entered: %c", c1);

    else if(c1 == 'E' || c1 == 'e')
            printf("the letter you entered: %c", c1);

    else
        printf("The value you entered is not between A and E.");

    return 0;
}
