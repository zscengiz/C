#include<stdio.h>

void sort(int a[], int b);

int main(){
    int x = 10, y = 6;
    int array1[10] = {3,7,62,1,15,23,11,87,12,2};
    int array2[6] = {21,12,30,7,3,6};
    
    printf("The first version of 1. array: ");
    for(int i = 0; i < x; i++){
        printf(" %d",array1[i]);
    }
    puts("\n");
    
    printf("The first version of 2. array: ");
    for(int i = 0; i < y; i++){
        printf(" %d",array2[i]);
    }
    sort(array1, x);
    sort(array2, y);
    puts("\n");

    printf("1.Array -> Sorted by DESC: ");
    for(int i = 0; i < x; i++){
        printf(" %d", array1[i]);
    }
    puts("\n");
        printf("2.Array -> Sorted by DESC: ");
    for(int i = 0; i < y; i++){
        printf(" %d", array2[i]);
    }
    return 0;
}
    void sort(int a[], int b){
        int j,k,temp;
        for(k = 0; k < b; k++){
            for(j = 0; j < b-1; j++){
                if(a[j]>a[j+1]){
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }
    }