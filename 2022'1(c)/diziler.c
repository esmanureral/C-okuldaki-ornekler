#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayilar []={19,18,17,16,15};
    int toplam=0;
    int i;
    for(i=0;i<4;i++)
    {
        toplam=toplam+sayilar[i];
        printf("toplam: %d",toplam);
    }
}
