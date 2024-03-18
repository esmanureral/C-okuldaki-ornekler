#include <stdio.h>
#include <stdlib.h>

int main()
{
   int first,second,largest;
   printf("Please provide 2 numbers=> \n");
   scanf("%d %d", &first,&second);

   largest=(first>second) ? first : second;
   printf("%d",largest);
   printf(" is the largest number from %d and %d",first,second);
}
