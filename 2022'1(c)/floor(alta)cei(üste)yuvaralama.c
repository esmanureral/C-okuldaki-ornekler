#include <stdio.h>
#include <stdlib.h>

int main()
{
    double sayi,sonuc1,sonuc2;
    printf("de�eri giriniz:");
    scanf("%lf",&sayi);

    sonuc1=floor(sayi);
    printf("sonuc1: %.2f",sonuc1);
    printf("\n");
    sonuc2=ceil(sayi);
    printf("sonuc2: %.2f",sonuc2);

}
