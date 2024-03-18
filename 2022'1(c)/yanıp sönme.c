#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int i;
    char words[]="Esmanur Eral\n";
    for(i=0;i<strlen(words);i++){
        sleep(1);
        putchar(words[i]);
    }
}
