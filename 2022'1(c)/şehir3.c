#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sehir[3][15];
    int i;
    for(i=0;i<2;i++)
    {
        printf("sehiri girin:");
        scanf("%s",sehir[i]);
    }
    printf("girdiginiz1: %s\n",sehir[0]);
}
