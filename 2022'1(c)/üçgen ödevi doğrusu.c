#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,space,rows;
    printf("Enter the number or rows of Floyd's triangle\n");
    scanf("%d",&rows);
    printf("**************");
    printf("\n");

    for(i=1,i=1;i<=rows;i++){
            for(space=0;space<=rows-i;++space)
            {
                printf(" ");
            }
            for(j=1;j<=2*i-1;j++){
                printf("%2d",j);
            }
            printf("\n");
    }
}

