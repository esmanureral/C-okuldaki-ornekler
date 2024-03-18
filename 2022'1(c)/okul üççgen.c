#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,rows,counter;
    printf("Enter the number or rows of Floyd's triangle\n");
    scanf("%d",&rows);
    printf("**************");

    for(counter=1,i=1;i<=rows;i++){
            for(j=1;j<=i;j++){
                printf("%3d",counter++);
            }
            printf("\n");
    }
}
