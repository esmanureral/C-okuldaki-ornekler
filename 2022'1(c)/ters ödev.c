#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Turkish");
 char s[100];
 printf("ters d�nmesini istedi�iniz kelime ya da c�mleyi giriniz :) :\n");
 gets(s);
 strrev(s);
 printf("girdi�inizin tersi: %s \n",s);
 printf("\n \n");
 printf("Esmanur ERAL");
 return 0;
  }
