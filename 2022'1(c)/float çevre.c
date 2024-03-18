#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kisa,uzun,cevre;

    printf( "kisa kenari giriniz:");
    scanf( "%f",&kisa);

    printf( "uzun kenari giriniz:");
    scanf( "%f",&uzun);

    cevre= kisa*2+uzun*2;
printf( "cevresi:  %f",cevre);
}
