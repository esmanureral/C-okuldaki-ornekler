#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,i,fact=1;

    printf("fakt�riyelini istedi�iniz sayiyi giriniz:");
    scanf("%d",&sayi);

    if(sayi<0){
    printf("error");
}
else {
    for(i=1;i<=sayi;i++){

         fact=fact*i; // fact=fact*i
    }


    printf("fakt�riyeli:  %d",fact);
}
}
