#include <stdio.h>
#include <stdlib.h>

int main()
{
    void nasiloynanir ()
    {
        printf("herkes biliyor oyunu");
        getchar();
        getchar();
    }
    int main()
    int i;
    int bilgisayar;
    int kullanici;
    int bilgisayarPuan=0;
    int kullaniciPuan=0;
    char userName [20];
    int secim;

    srand(time(NULL));

    printf("*********************\n");
    printf("Taþ-Kaðýt-Makas oyunu\n");
    printf("*********************\n");

    printf("1-Taþ  2-Kaðýt  3-Makas\n\n");

    printf("                     \n");
    printf("----------------------\n");
    printf("|                     |\n");
    printf("|       OYUN MENUSU   |\n");
    printf("|                     |\n");
    printf("------------------------\n");



    printf("7-oyuna basla\n");
    printf("8-oyun nasil oynanir?\n");
    printf("9-oynamak istemiyorum\n");

    printf ("seciminizi yapin");
    scanf("%d",&secim);

    switch(secim)
    {
    case 7:
        ;
        break;

    case 8:
        nasil oynanir();
        break;

    case 9:
        printf("cikis yapiliyor..tusa basin");
        getch();
        return 0;
        break;

        default;
        printf("hatali giris");
        return 0;
    }
    printf("oyuncunun adi:");
    scanf ("%s",&userName);

    for(i=1;i<=5;i++)
    {
        printf("sayi seciniz:");,
        scanf("%d",&kullanici);

        bilgisayar=rand () % 3 + 1;

        if(kullanici==1){
            if(bilgisayar==1)
                printf("berabere\n");
            else if(bilgisayar==2)
                printf("bilgisayar kazandi | Bilgisayar:%d\n",bilgisayar);
            bilgisayarPuan+=1;
        }
        else{
            printf("%s kazandi\n",userName);
            kullaniciPuan +=1;
        }

    }

}
