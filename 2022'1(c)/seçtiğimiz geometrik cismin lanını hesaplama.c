#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secim,kenar=0,yukseklik=0,taban=0,r;
    float  pi,alan;
     pi=3.14;
    printf("**hangi geometrik �eklin alan�n� bulmak istersiniz? \n");
    printf("1-kare,2-��gen,3-daire");
    scanf("%d",&secim);

    switch(secim){

    case 1:
      printf("karenin bir kenar�n� giriniz");
      scanf("%d",&kenar);
      printf("karenin alan�: %d",(kenar*kenar));
 break;

    case 2:
        printf("��genin tabanini giriniz:");
        scanf("%d",&taban);
        printf("��genin y�ksekli�ini giriniz:");
        scanf("%d",&yukseklik);
        printf("��genin alan�: %d",(taban*yukseklik)/2);
        break;

    case 3:
        printf("dairenin yari�apini giriniz:");
        scanf("%d",&r);
        alan=pi*pow(r,2);
        printf("dairenin alani :%f",alan);

}
}
