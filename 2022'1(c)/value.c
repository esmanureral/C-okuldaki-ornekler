#include <stdio.h>
#include <stdlib.h>

int main()
{
int a;
printf("a=?");
scanf("%d",&a);

while (a<15){
    printf("value of a:%d\n",a);
    a++;
}
while (a>15){
    printf(":( %d\n",a);
    break;
}
}
