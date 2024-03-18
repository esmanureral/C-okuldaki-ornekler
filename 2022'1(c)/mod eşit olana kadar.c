#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i=0,j=0,c=0;
   do{
    i=i+11;
    j=j+1;
    c++;
   }
   while(i%4!=j%4);
   printf("%d",c);
}
