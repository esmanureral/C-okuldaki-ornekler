#include <stdio.h>
#include <stdlib.h>

int main()
{
    int boy,en,i,j;
    printf("en degeri:");
    scanf("%d",&en);
    printf("boy degeri:");
    scanf("%d",&boy);

    for(i=1;i<=boy;i++)
    {
        for(j=1;j<=en;j++)
        {
            printf("*");
        }
        printf("\n");
    }

}
