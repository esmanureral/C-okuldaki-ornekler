#include <stdio.h>
#include <stdlib.h>

int main()
{
    //* * * *
    //* * * *
    //* * * *

    int sayi;
    int i,j;

    printf("sayi giriniz:");
    scanf("%d",&sayi);

    for(i=0;i<sayi;i++){
        for(j=0;j<sayi;j++){
            printf(" * ");
    }
    printf("\n");
}
}


