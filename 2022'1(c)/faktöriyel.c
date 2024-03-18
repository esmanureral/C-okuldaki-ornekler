#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sayi;
    int faktoriyel=1;
    printf("faktoriyel alinacak sayi:");
    scanf("%d",&sayi);
    for(i=1;i<=sayi;i++)
    {
faktoriyel=faktoriyel*i;

    }
    printf("sonucunuz: %d",faktoriyel);



}
