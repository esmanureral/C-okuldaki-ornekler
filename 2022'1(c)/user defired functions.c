#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,sum;
  int addNumbers(int a,int b);
  printf("Enter two numbers");
  scanf("%d %d",&n1,&n2);

  sum=addNumbers(n1,n2);
  printf("sum=%d",sum);
}

int addNumbers (int a,int b)
{
    int result;
    result=a+b;
    return result;
}

