#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a=5;
   int *p;
   p=&a;

   printf("%d\n",p);
   printf("%d\n",*p);

   p++; // int 4 bitten oluþtuðu için 4 artar.

   printf("%d\n",p);
   printf("%d\n",*p);
}
