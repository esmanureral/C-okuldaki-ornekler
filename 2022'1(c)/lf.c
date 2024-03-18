#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,product;
    printf("enter two numbers:");
    scanf("%lf %lf",&a,&b);
    product=a*b;
    printf("product=%.2lf",product);
}
