#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,toplam=0,sayac=0;
    float ortalama;
    do{
        printf("lütfen bir sayi giriniz:\n");
        scanf("%d",&sayi);
        toplam+=sayi;
        sayac++;
        if(sayi<0)
        {
            toplam-=sayi;
        }

    } while(sayi>0);
    ortalama=toplam/(sayac-1);
    printf("%f",ortalama);
}
