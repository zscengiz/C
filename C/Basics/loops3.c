#include <stdio.h>

int main() {

    int i, sum = 0;

    printf("Even numbers from 1 to 100: ");
    for(i = 2; i <= 100; i=i+2)
    {
        sum = sum + i;
        printf("%d ", i);
    }
    printf("\n");
    printf("Sum = %d", sum);
}