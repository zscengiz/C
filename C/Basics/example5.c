#include <stdio.h>

int main() {

    int number1, number2, number3, temp;

    printf("Enter 3 Number: ");
    scanf("%d %d %d",&number1, &number2, &number3);

    printf("Sorted version of entered numbers:");

    if(number1 > number2){

        temp = number1;
        number1 = number2;
        number2 = temp;
    }

    if(number1 > number3){

        temp = number1;
        number1 = number3;
        number3 = temp;
    }

    if(number2 > number3){

        temp = number2;
        number2 = number3;
        number3 = temp;
    }

    printf("%d - %d - %d", number1, number2, number3);

}