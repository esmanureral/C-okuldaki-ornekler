#include <stdio.h>
#include <stdlib.h>

    struct ogrenci {
    char ad[15];
    char soyad[20];
    int num;
    int yas;
};

int main ()
{
    struct ogrenci esmanur = {"Esmanur","Eral",18,19};
    printf("%s %s %d %d \n",esmanur.ad,esmanur.soyad,esmanur.num,esmanur.yas);
}
