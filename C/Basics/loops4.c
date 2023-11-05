#include <stdio.h>
int main() {

    int i, y ;

    for (i = 1; i <= 5; i=i+1) 
    {
        for (y=1; y <= i; y++) 
        {
            printf("*"); 
        }
        printf("\n");
    }
}