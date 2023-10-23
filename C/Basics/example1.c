#include <stdio.h>

int main(){

    int number1, number2, sum, multiplication, division, mod;
    printf("Enter two numbers \n");

    scanf("%d %d", &number1, &number2);

    sum = number1 + number2;
    printf("Sum = %d \n" , sum);

    multiplication = number1 * number2; 
    printf("multiplication = %d \n" , multiplication);

    if(number2 != 0){
        division = number1 / number2;
        printf("division = %d \n" , division);
    }
    else
        printf("Division by zero is not allowed.\n");


    mod = number1 % number2;
    printf("Mod = %d \n", mod);

    return 0;
}