#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,i;
    a=1;
    b=1;
    printf("%d\n",a);
    printf("%d\n",b);
    for(i=1;i<=8;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
    }
}
