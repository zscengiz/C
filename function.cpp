#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    int num1, num2, sum, point;

    srand(time(NULL));

    printf("The Game has Started\n");
    printf("Rolling the Dice\n");
    printf("------------\n");

    num1 = 1 + rand() % 6;
    num2 = 1 + rand() % 6;

    sum = num1 + num2;

    printf("Dice Result: %d and %d\n", num1, num2);

    if (sum == 7 || sum == 11) {

        printf("Sum of the Dice: %d\n", sum);
        printf("------------\n");
        printf("Player Wins!\n");

        return 0;

    } 
    else if (sum == 2 || sum == 3 || sum == 12) {

        printf("Sum of the Dice: %d\n", sum);
        printf("------------\n");
        printf("House Wins!\n");

        return 0;

    } 
    else {

        point = sum;
        printf("Sum of the Dice: %d\n", point);

    }

    while (1) {
        
        num1 = 1 + rand() % 6;
        num2 = 1 + rand() % 6;

        sum = num1 + num2;

        printf("Rolling the Dice: %d and %d\n", num1, num2);

        if (sum == 7) {
            printf("Sum of the Dice: %d\n", sum);
            printf("------------\n");
            printf("House Wins\n");
            break;

        } 
        else if (sum == point) {
            printf("Sum of the Dice: %d\n", sum);
            printf("------------\n");
            printf("Player Wins\n");
            break;

        } 
        else {
            printf("Rolling the Dice Again...\n\n");
        }
    }

    return 0;

}
