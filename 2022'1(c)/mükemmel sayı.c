#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sayi,i,toplam=0;

   printf("sayi giriniz:");
   scanf("%d",&sayi);

   for(int i=1;i<sayi;i++)
   {
       if(sayi%i==0)
        toplam+=i;

   }
   if(toplam==sayi)
    printf("m�kemmeldir");
   else
    printf("m�kemmel de�ildir");

}
