#include <stdio.h>
int main()
{
    int i, j, rows;

    printf("Sat�r say�s�n� girin: ");
    scanf("%d",&rows);

    for(i=1; i<=rows; ++i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
