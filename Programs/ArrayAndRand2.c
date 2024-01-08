#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int n = 20, i;
    int array[n];
    int histogram[20] = {0};

    for (int i = 0; i < n; ++i) {
        array[i] = 1 + rand() % 20;
        printf("%d ", array[i]);
    
    if((i + 1)% 5 == 0){
        printf("\n");
    }
    }

    printf("\n\nRating   Frequency   Histogram\n");
    printf("-------  ----------   ----------\n");

    for (int i = 0; i < n; ++i) {
        histogram[array[i]]++;
    }

    for (int i = 1; i < 20; ++i) {
        printf("   %d         %d         ", i, histogram[i]);

        for (int j = 0; j < histogram[i]; ++j) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}