#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("**ZAMLI MAAS**");
printf("\n\n");
    float maas,yenimaas;

    printf("suan ki maasinizi giriniz:");
    scanf("%f",&maas);

    yenimaas=maas+maas*12/100;

    printf("yeni maasiniz: %f",yenimaas);
}
