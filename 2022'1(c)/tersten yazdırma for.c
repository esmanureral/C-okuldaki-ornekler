#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    char metin[100];
    printf("metni giriniz:");
    scanf("%s",metin);
    printf("\ngirilen metin:");

    for(i=0;metin[i] !=0;i++){
            printf("%c",metin[i]);

    }
    printf("\ntersten yazd�rma:");
    for(j=i;j>=0;j--){
            printf("%c",metin[j]);

    }

}
