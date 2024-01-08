 #include <stdio.h>
int main(){
    
    int n = 10;
    int x, j, k, temp;
    int array[10] = {3, 2 ,44, 5, 34, 0, 6, 23, 12, 4};

    printf("The first version of the array: ");
    for(x = 0; x < n; x++){
        printf(" %d", array[x]);
    }
    puts("\n");
    
    for(j = 0; j < n; j++){
        for(k = 0; k < n-1; k++){
            if(array[k] > array[k+1]){
                temp = array[k];
                array[k] = array[k+1];
                array[k+1] = temp;
            }
        }
    }
    
    printf("The sorted version of the array: ");
    for(j = 0; j < n; j++){
        printf(" %d",array[j]);
    }
    return 0;
}