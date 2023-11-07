#include <stdio.h>

int main() 
{
    int amount, balance = 0;
    char operation;

    while (1) { 
        printf("Do you want to perform a transaction? Enter D/d. (To exit the program, press 1): ");
        scanf(" %c", &operation);

        if (operation == '1') {
            printf("Program is ending.\n");
            break; 
        }

        if (operation != 'D' && operation != 'd') {
            printf("Invalid option. Please enter the letter D/d or press 1 to exit the program:  \n");
            continue;
        }

        printf("Options:\n");
        printf("\nTo withdraw cash, enter C/c: ");
        printf("\nTo deposit money, enter Y/y: ");
        printf("\nEnter G/g to check your account balance: (Press 1 to exit the program): ");
        scanf(" %c", &operation);

        switch (operation) {
            case 'C':
            case 'c':
                printf("Enter the amount you want to withdraw: ");
                scanf("%d", &amount);
                if (amount > balance) {
                    printf("Insufficient balance. Your balance cannot go negative. Your balance: %d TL\n", balance);
                } else {
                    balance -= amount;
                    printf("New balance: %d TL\n", balance);
                }
                break;

            case 'Y':
            case 'y':
                printf("Enter the amount you want to deposit: (Press 1 to exit the program): ");
                scanf("%d", &amount);
                if (amount < 0) {
                    printf("Deposited money cannot be a negative value.\n");
                } else {
                    balance += amount;
                    printf("New balance: %d TL\n", balance);
                }
                break;

            case 'G':
            case 'g':
                printf("The balance in your bank account is %d TL.\n", balance);
                break;

            default:
                printf("Invalid operation. Enter C/c, Y/y, or G/g. (Press 1 to exit the program): \n");
        }
    }
    return 0;
}
