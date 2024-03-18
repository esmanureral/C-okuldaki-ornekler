#include <stdio.h>
#include <stdlib.h>

int main()
{
 int x,y;
 int sonuc;

 printf("tabani giriniz:");
 scanf("%d",&x);

 printf("ussu giriniz:");
 scanf("%d",&y);

 sonuc=pow(x,y);
 printf("sonuc: %d",sonuc);
}
