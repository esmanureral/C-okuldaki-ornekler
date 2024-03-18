#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n1,n2,sum;
   printf("Enter two numbers:");
   scanf("%d %d",&n1,&n2);

   sum=addNumbers(n1,n2);
   printf("sum=%d",sum);

   return 0;
}
int addNumbers(int a,int b)
{
    int result;
    result=a+b;
    return result;
}

