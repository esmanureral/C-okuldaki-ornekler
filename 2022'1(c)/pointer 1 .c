#include <stdio.h>
#include <stdlib.h>

int main()
{
 int *p;
 int a=10;
 p=&a;

 printf("*p----> %d\n",*p); //
 printf("&p----> %d\n",&p);
}
