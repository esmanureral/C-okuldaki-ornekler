#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int count=0;

    printf("enter a number:");
    scanf("%d",&n);

    while(n!=0){
        n=n/10;
        count++;

    }
    printf("\nthe number of digits in a ınteger is: %d\n",count);
}


girilen sayının basamak sayısını buluyor..
