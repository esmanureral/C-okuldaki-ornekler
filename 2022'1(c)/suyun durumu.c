#include <stdio.h>
#include <stdlib.h>

int main()
{
     printf("**suyun durumunu ögrenme**");
    printf("\n\n");

    int su;
    printf("suyun sicakliðini giriniz:");
    scanf ("%d",&su);

    if(su<=0)
    {
        printf("su suan buhar halindedir.");
    }
    if(su>0 && su<100)
{
    printf("su suan sivi halindedir.");
}
if(su>=100)
    {
        printf("su suan gaz halindedir.");
    }
}
