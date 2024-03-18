#include <stdio.h>
#include <stdlib.h>

int main()
{
int sayi;
printf("sayi giriniz:");
scanf("%d",&sayi);
switch(sayi)
{
    case 1:printf("ocak");break;
    case 2:printf("subat");break;
    default:printf("hatali sayi");
}
}
