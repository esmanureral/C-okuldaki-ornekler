#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k=0;
    printf("enter an integer:\n");
    scanf("%d",&i);
    for(j=1;j<=i;j++){
        k+=j;
    }
    printf("%d",k);
}
