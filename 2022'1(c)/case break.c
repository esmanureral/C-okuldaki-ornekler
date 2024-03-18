#include <stdio.h>
#include <stdlib.h>

int main()
{
 int number=5;
 switch(number){
case 1:
case 2:
case 3:
    printf("one,two or three.\n");
    break;
case 4:
case 5:
    printf("five\n");
case 6:
    printf("four,five,or six.\n");

    printf("greater than six.\n");
}
}
