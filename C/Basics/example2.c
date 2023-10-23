#include <stdio.h>

int main() {

    float number1, number2;

    printf("Enter 2 Decimal Numbers \n");

    scanf("%f", &number1);
    scanf("%f", &number2);

    printf("Sum = %7.2f \n", number1 + number2);
    printf("Multiplication = %7.2f \n", number1 * number2);

    if(number2 != 0)
        printf("Division = %7.2f \n", number1 / number2);
    else
        printf("Division by zero is not allowed.\n");

    return 0;

}