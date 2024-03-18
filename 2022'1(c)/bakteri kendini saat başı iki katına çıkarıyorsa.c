#include <stdio.h>
#include <stdlib.h>

int main()
{
   int hour=1;
   int total=1;

   while(hour<=24)
   {
       total*=2;
       hour++;
   }
   printf("toplam bakteri:  %d",total);
}
