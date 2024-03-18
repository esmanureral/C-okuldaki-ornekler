#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;

    printf("sayiyi giriniz:");
    scanf("%d",&sayi);

    if(sayi%3==0 && sayi%5==0)

    {
        printf("3 ve 5 e bölünüyor");
    }
    else
    {
        printf("3 ve 5 e bölünmüyor");
    }
}
