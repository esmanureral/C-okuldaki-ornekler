#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secim,kenar=0,yukseklik=0,taban=0,r;
    float  pi,alan;
     pi=3.14;
    printf("**hangi geometrik þeklin alanýný bulmak istersiniz? \n");
    printf("1-kare,2-üçgen,3-daire");
    scanf("%d",&secim);

    switch(secim){

    case 1:
      printf("karenin bir kenarýný giriniz");
      scanf("%d",&kenar);
      printf("karenin alaný: %d",(kenar*kenar));
 break;

    case 2:
        printf("üçgenin tabanini giriniz:");
        scanf("%d",&taban);
        printf("üçgenin yüksekliðini giriniz:");
        scanf("%d",&yukseklik);
        printf("üçgenin alaný: %d",(taban*yukseklik)/2);
        break;

    case 3:
        printf("dairenin yariçapini giriniz:");
        scanf("%d",&r);
        alan=pi*pow(r,2);
        printf("dairenin alani :%f",alan);

}
}
