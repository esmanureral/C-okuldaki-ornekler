#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
int sayi,tahmin;
srand(time(NULL)); // s�rekli farkl� say� tahmini sa�l�yor
sayi=rand()%100+1;
while (sayi!=tahmin){
    scanf("%d",&sayi);
    if(sayi<tahmin)
        printf("daha k���k bir sayi giriniz:");
    else if (sayi<tahmin)
        printf("daha b�y�k bir sayi giriniz:");
}
}
