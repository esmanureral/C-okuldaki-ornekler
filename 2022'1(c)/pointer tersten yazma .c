#include <stdio.h>
#include <stdlib.h>

void dizinin_tersi( int *pointer []);
int main()
{
   int a [10]={1,2,3,4,5,6,7,8,9,10};
   int i;
   int *ptra[10];

   for(i=0;i<10;i++)
    ptra[i]=&a[i];

   dizinin_tersi(ptra);

   getch();
   return 0;

}
void dizinin_tersi(int *pointer [])
{
    int i;
    for(i=9;i>=0;i--){
        printf("%d",*pointer[i]);
        printf("\n");
    }
}
