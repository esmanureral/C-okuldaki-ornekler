#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
   printf("sayi giriniz:");
   scanf("%d\n",&sayi);

    int y,o,b;
    y=sayi/100;
    o=sayi/10;
    o=o%10;
    b=sayi%100;

    printf("yuzler: %d",y);
    printf("onlar: %d",o);
    printf("birler: %d",b);
}
