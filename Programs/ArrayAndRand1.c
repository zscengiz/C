#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n = 40;
    int i, j, k;
    int array[40];
    
    srand(time(NULL));
    
    for(int i = 0; i < 40; i++){
    array[i] = 1 + rand() %10;
    printf(" %d",array[i]);
    
    if((i + 1) %10 == 0){
    printf("\n");
    }
    }
    
    printf("\n************************\n");
    printf("Rating         Frequency\n");

    for(int j = 1; j < 11; j++){
        int frequency = 0;
        for (int i = 0; i < n; i++) {
            if (array[i] == j) {
                frequency++;
            }
        }
        printf("%d              %d\n",j,frequency);
    }
}