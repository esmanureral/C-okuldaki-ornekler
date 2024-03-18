#include <stdio.h>
#include <stdlib.h>

int main()
{
 printf("ortalama hesaplama");
 printf("\n\n");


 int matematik,turkce,ortalama;

 printf("matematik notunu giriniz:");
 scanf("%d",&matematik);

 printf("turkce notunu giriniz:");
 scanf("%d",&turkce);

 ortalama=(matematik+turkce)/2;

 printf("ortalamaniz:%d \n",ortalama);

 if(ortalama>=50)
 {
     printf("geçtiniz");
 }

else
{
    printf("kaldiniz");
}
}
