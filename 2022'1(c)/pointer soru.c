#include <stdio.h>
#include <stdlib.h>

int main()
{
   int fun(int n,int *fg)
   {
       int t,f;
       if(n<=1)
       {
           *fg=1;
           return 1;
       }
       t=fun(n-1,fg);
       f=t+*fg;
       *fg=t;
       return f;
   }
   int main ()
   {
       int x=15;
       printf("%d\n",fun(5,&x));
       getchar ();
       return 0;
   }
}
