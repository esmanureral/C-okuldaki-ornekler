#include <stdio.h>
#include <stdlib.h>

struct kitapbilgi
{
    char kitapad[20];
    char yazar[20];
    int fiyat;
    float puan;
};
int main()
{
  struct kitapbilgi kb={"sekerportakali","Vas",10,7.25};
  printf("KitapAd: %s \n",kb.kitapad);
  printf("Yazar: %s \n",kb.yazar);
  printf("fiyat: %d \n",kb.fiyat);
  printf("puan: %.2f",kb.puan);
}
