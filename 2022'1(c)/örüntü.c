#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,toplam;

	printf("Bir sayi giriniz ve o sayi 4 er 4 er artsýn :");
	scanf("%d",&sayi);

	for (sayi=sayi;sayi<=10; sayi+=4)
	{
		printf("%d \n",sayi);
		toplam=sayi+sayi;
	}
printf("toplam: %d",toplam);
}
