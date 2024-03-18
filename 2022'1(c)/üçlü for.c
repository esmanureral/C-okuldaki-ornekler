#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c=0;
    for(int i=1;i<=4;i++)
        for(int j=i+1;j<=4;j++)
        for(int k=j;k<=4;k++)
        c++;
    printf("%d",c);
}
