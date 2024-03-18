#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,space,rows;
    printf("Enter the number:");
    scanf("%d",&rows);
    printf("\n");

    for(i=1;i<=rows;i++){

            for(space=1;space<=3*rows-i*3;++space)
            {
                printf(" ");
            }
            for(j=1;j<=2*i-1;j++)
            {
                if(j>9)
                printf("%d ",j);
               else
                printf("%d   "   ,j);
            }
            printf("\n");
    }
 printf("\n");
 printf("Esmanur ERAL");
}
