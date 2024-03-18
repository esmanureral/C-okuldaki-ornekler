#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[10]="";
    char a [30]="1112031584";
    int counter=0;

    for(int i=1;i<10;i++){
        if(a[i]%2==a[i-1]%2){
            s[counter]=max(a[i],a[i-1]);
            counter++;
        }
    }
        printf("\nResult:\n");
        for(int i=0;i<strlen(s);i++)
            printf("%c",s[i]);
        return 0;
    }
    int max (int x,int y){
    if(x>y){
        return x;
    }else{
    return y;
    }
}
