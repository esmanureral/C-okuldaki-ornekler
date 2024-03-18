#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,j,taban;
  printf("taban degeri giriniz:");
  scanf("%d",&taban);
  for(i=1;i<=taban;i++)
  {
      for(j=1;j<=i;j++)
      {
          printf("*");
      }
      printf("\n");
  }
}
