#include <stdio.h>
#include <stdlib.h>
void main()
{
    int sayi=0,tahmin=0;
    int kackez=0;
    srand(time(NULL));
    sayi=rand()%100+1;
    printf("tahminin:");
    scanf("%d",&tahmin);

    while(tahmin!=sayi)
    {
        if(tahmin<sayi)
        {
            printf("yanlis tahmin,daha b�y�k bir sayi gir:");
            scanf("%d",&tahmin);
            kackez++;
        }
        if(tahmin>sayi);
        {
            printf("yanlis tahmin,daha k���k bir sayi gir:");
            scanf("%d",&tahmin);
            kackez++;
        }
        if(tahmin==sayi)
        {
            printf("do�ru tahmin!%d defada bildiniz!!",sayi,kackez+1);

        }
        }
}
