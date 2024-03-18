#include <stdio.h>
#include <stdlib.h>

int main()
{
    double sayi,sonuc;
    printf("sayiyi giriniz:");
    scanf("%lf",&sayi);
    sonuc=fabs(sayi);
    printf("sonuc:%.lf",sonuc);
}
