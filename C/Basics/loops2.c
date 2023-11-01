#include <stdio.h>

int main() {

    int i, sum = 0;

    printf("Odd numbers from 1 to 100: ");
    for(i=1; i <= 100; i=i+2){

        sum = sum + i;
        printf("%d", i);
        printf(" ");
    }
    printf("\n");
    printf("Sum = %d",sum);
}