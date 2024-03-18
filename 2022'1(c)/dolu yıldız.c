#include <stdio.h>
#include <stdlib.h>


int main()
{
int taban;
int i,k;
printf("taban yaziniz:");
scanf("%d",&taban);
for(i=1;i<=taban;i++)
{
    for(k=taban;k>=i;k--)
    {
        printf(" ");
    }
    for(k=1;k<=i;k++)
    {
        printf("*");
    }
    printf("\n");
}
}

