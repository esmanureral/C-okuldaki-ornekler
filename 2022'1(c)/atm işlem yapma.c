#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int islem,miktar,bakiye=1000;
   char yeniden='e';
   printf("1-Bakiye sorgulama \n 2-Para �ekme \n 3-Para yat�rma");
   while(yeniden=='e'){
    printf("lutfen yapmak istediginiz islemi seciniz:");
    scanf("%d",&islem);
    switch(islem){
    case 1:
        printf("bakiyeniz %d tl'dir",bakiye);
        break;
    case 2:
        printf("�ekmek istediniz miktar� giriniz:");
        scanf("%d",&miktar);
        bakiye-=miktar;
        printf("kalan bakiyeniz %d tl",bakiye);
       break;
    case 3:
        printf("yat�rmak istediginiz miktar� giriniz:");
        scanf("%d",&miktar);
        bakiye+=miktar;
        printf("yeni bakiyen,z %d tl",bakiye);
        break;
    default:
        printf("hatali giris");
        break;
        }
        printf("baska islem yapmak ister misiniz? e/h");
        scanf("%s",&yeniden);
   }
   }
