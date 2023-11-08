#include <stdio.h>

int main() {
    
printf("\n--------------");
printf("\nFirst Triangle");
printf("\n\n");

int x,y;

for(x=1; x<=4; x++){
    for(y=1; y <= x; y++){
        printf("*");
    }
    printf("\n");
}
printf("\n--------------");
printf("\nSecond Triangle");
printf("\n\n");

 int n=4,m=1;  
    for(int i=n;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++)  
        {  
          printf(" ");  
        }  
        for(int k=1;k<=m;k++)  
        {  
            printf("*");  
        }  
        printf("\n");  
        m++;  
    }  

printf("\n--------------");
printf("\nThird Triangle");
printf("\n\n");

    for(int i=4;i>=1;i--)  
    {  
      for(int j=1;j<=i;j++)  
      {  
          printf("*");  
      }  
      printf("\n");  
    }  
printf("\n--------------");

}
