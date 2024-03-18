#include <stdio.h>
#include <stdlib.h>

int main()
{

    int sayi1,sayi2,sonuc;
    char islem;

    printf("sayi1 giriniz:\n");
    scanf("%d",&sayi1);
    printf("sayi2 giriniz:");
    scanf("%d",&sayi2);
    scanf("%s",&islem);

    switch(islem)
    {
    case '+':
        sonuc=sayi1+sayi2;
        printf("sonuc: %d",sonuc);
        break;

    case '-':
        sonuc=sayi1-sayi2;
        printf("sonuc: %d",sonuc);
        break;
    }
}


