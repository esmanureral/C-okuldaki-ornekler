#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vize,final,ortalama;
    printf("vize notunu giriniz:");
    scanf("%d",&vize);

    printf("final notunu giriniz:");
    scanf("%d",&final);

    ortalama=(vize%40+final%60);
    printf("ortalamaniz: %d",ortalama);

    if(ortalama>=50){
        printf("ge�tiniz");
        }
   else{
        printf("kald�n�z");
        }
    }

