#include  <stdio.h>
int main()
{



int misir,kola,su,bilet,toplam;

printf("misir adedini giriniz:");
scanf("%d",&misir);

printf("kola adedini giriniz:");
scanf("%d",&kola);

printf("su adedini giriniz:");
scanf("%d",&su);

printf("toplam bilet adedini giriniz:");
scanf("%d",&bilet);

toplam=misir*2+kola*3+su*1+bilet*7;

printf("toplam borcunuz:%d",toplam);
printf("TL dir,afiyet olsun\n ");
    }
