#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Turkish");
 char s[100];
 printf("ters dönmesini istediğiniz kelime ya da cümleyi giriniz :) :\n");
 gets(s);
 strrev(s);
 printf("girdiğinizin tersi: %s \n",s);
 printf("\n \n");
 printf("Esmanur ERAL");
 return 0;
  }
