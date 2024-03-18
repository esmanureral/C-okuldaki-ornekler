#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
int sayi,tahmin;
srand(time(NULL)); // sürekli farklý sayý tahmini saðlýyor
sayi=rand()%100+1;
while (sayi!=tahmin){
    scanf("%d",&sayi);
    if(sayi<tahmin)
        printf("daha küçük bir sayi giriniz:");
    else if (sayi<tahmin)
        printf("daha büyük bir sayi giriniz:");
}
}
