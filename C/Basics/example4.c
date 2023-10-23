#include <stdio.h>

int main() {

    char c1, c2;
    int s1,s2;

    printf("Enter 2 Number: \n");
    scanf("%d%d",&s1,&s2);

    printf("Enter A or B or C: ");

    getchar();//or we can use scanf("\n%c",&c1); on line 15.

    scanf("%c",&c1);

    printf("s1 = %d\n",s1);
    printf("s2 = %d\n",s2 );

    printf("c1 = %c",c1);

    return 0;

} 