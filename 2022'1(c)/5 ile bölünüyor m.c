#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("5 ile b�l�n�yor mu?");
printf("\n\n");
    int x;

    printf("sayiyi girin:");
    scanf ("%d",&x);

    if(x%5==0)
    {
        printf("b�l�n�yor");
    }

    else
    {
        printf("b�l�nm�yor");
    }
}
