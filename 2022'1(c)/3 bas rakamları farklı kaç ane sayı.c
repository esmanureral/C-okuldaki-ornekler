#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sayac=0;
   int i;
   int a,b,c;
   int sayi;

   for(i=100;i<=999;i++){
    a=i/100;
    b=(i/10)%10;
    c=i%10;
    if(a!=b && a!=c && b!=c) {
        sayac++;
    }
   }
   printf("%d",sayac);
}
