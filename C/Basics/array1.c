#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    
    int n = 14;
    int array[n];
    int x, sum=0;
    
    srand(time(NULL));
    
    for(x = 0; x < n; x++){
    array[x] = 1 + rand() %20;
    sum = sum + array[x];
    }

    for(x = 0; x < n; x++){
        printf("%d. index - Value of element = %d \n",x,array[x]);
    }
    
    printf("Sum of numbers in the array = %d\n", sum);
    printf("Avarage = %d",sum/n);
}