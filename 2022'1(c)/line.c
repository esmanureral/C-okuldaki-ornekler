#include <stdio.h>
#include <stdlib.h>

int main()
{
    int line [10];

    for(int i=0;i<10;line[i++]=0)
        ; // null statement
    for(int i=0;i<10;i++)
        printf("line [%d]=%d\n",i,line[i]);
}
