#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("5 ile bölünüyor mu?");
printf("\n\n");
    int x;

    printf("sayiyi girin:");
    scanf ("%d",&x);

    if(x%5==0)
    {
        printf("bölünüyor");
    }

    else
    {
        printf("bölünmüyor");
    }
}
