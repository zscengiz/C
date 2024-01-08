#include<stdio.h>

void sort(int a[],int b);

int main(){
    
    int x, n=10;
    int array[10]={12,1,21,34,45,27,23,3,17,22};
    
    printf("The firs version of array: ");
    for(x = 0; x < n; x++){
        printf(" %d",array[x]);
    }
    puts("\n");

    sort(array, n);
    
    printf("Sorted by DESC: ");
    for(x = 0; x < n; x++){
        printf(" %d",array[x]);
    }
        return 0;
    }

    void sort(int a[], int b){
        int i, j, temp;
        for(i = 0; i < b; i++){
            for(j = 0; j < b - 1; j++){
                if(a[j] > a[j+1]){
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                    
                }
            }
        }
    }