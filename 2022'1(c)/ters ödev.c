#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Turkish");
 char s[100];
 printf("ters dönmesini istediðiniz kelime ya da cümleyi giriniz :) :\n");
 gets(s);
 strrev(s);
 printf("girdiðinizin tersi: %s \n",s);
 printf("\n \n");
 printf("Esmanur ERAL");
 return 0;
  }
