#include <stdio.h>
#include <stdlib.h>

int main()
{
    double sayi,sonuc;
    printf("sayiyi giriniz:");
    scanf("%lf",&sayi);
    sonuc=log10(sayi);
    printf("sonuc: %.lf",sonuc);
}
