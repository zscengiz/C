#include <stdio.h>

int main() {

int number;

printf("Enter an integer between 1-5: ");
scanf("%d", &number);

if(number >= 1 && number <= 5){
switch(number){

    case 1:
    printf("Number you entered: %d", number);
    break;

    case 2:
    printf("Number you entered: %d", number);
    break;

    case 3:
    printf("Number you entered: %d", number);
    break;

    case 4:
    printf("Number you entered: %d", number);
    break;

    case 5:
    printf("Number you entered: %d", number);
    break;
}
}

else
printf("Enter a value between 1-5 ");

return 0;
}