#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,j;
    for(i=1;i<=10;i++){
        for(j=0;j<=10;j++){

            printf("%d*%d=%d \n",i,j,(i*j));
    }
    printf("\n");
}
}

 // 1*0=0 1*1=1 1*2=2 1*3=3..
// 2*0=0 2*1=2 2*2=4 2*3=6

