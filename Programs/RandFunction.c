#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num1, num2, point, sum;
    printf("Game description:\n The player rolls 2 dice. If the sum of the\n 2 dice thrown is 7 or 11, the player wins. \n If the sum of the dice thrown is 2, 3 or 12,\n the player loses and the machine wins.If the \n total is outside these numbers, the sum is \n assigned to 'point' and the program enters the\n loop. If a 7 comes up, the machine wins, if a \n'point' comes up, the player wins.\n");
    
    printf("*******************************************\n");
    printf("Game Start\n");
    printf("*******************************************\n");

    srand(time(NULL));
    num1 = 1 + rand() %6;
    num2 = 1 + rand() %6;
    sum = num1 + num2;

    if(sum == 7 || sum == 11){
        printf("\nDice 1: %d\nDice 2: %d\n", num1, num2);
        printf("Sum of the dice= %d\n",sum);
        printf("---------------");
        puts("\n");
        printf("You Win!!!\n");
        return 0;
    }
    else if(sum == 2 || sum == 3 || sum == 12){
        printf("\nDice 1: %d\nDice 2: %d\n", num1, num2);
        printf("Sum of the dice= %d\n",sum);
        printf("---------------");
        puts("\n");
        printf("Machine Win!!!\n");
        return 0;
    }
    else{
        point = sum;
        printf("---------------");
        printf("\nDice 1: %d\nDice 2: %d\n", num1, num2);
        printf("Sum of the dice= %d\n", point);
    }

    while(1){
        
        num1 = 1 + rand() %6;
        num2 = 1 + rand() %6;
        sum = num1 + num2;

        printf("-------loop--------\n");

        if(sum == point){
            printf("\nDice 1: %d\nDice 2: %d\n", num1, num2);
            printf("Sum of the dice= %d\n",sum);
            printf("---------------");
            puts("\n");
            printf("You Win!!!\n");
            break;
        }
        else if(sum == 7){
            printf("\nDice 1: %d\nDice 2: %d\n", num1, num2);
            printf("Sum of the dice= %d\n",sum);
            printf("---------------");
            puts("\n");
            printf("Machine Win!!!\n");
            break;
        }
        else{
            printf("---------------");
            printf("\nDice 1: %d\nDice 2: %d\n", num1, num2);
            printf("Sum of the dice= %d",sum);
            printf("\nThe dice is thrown again\n");
            printf("---------------\n");
        }
    }
    return 0;
}