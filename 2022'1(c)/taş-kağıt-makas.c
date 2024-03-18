#include <stdio.h>
#include <stdlib.h>

int main()
{
   int T=1;
   int K=2;
   int M=3;
   int i;
   int oyuncu=0;
   int bilgisayar=0;
   int secim;
   srand(time(NULL));
   printf("Tas=1,Kagıt=2,Makas=3");
   for(i=0;i<=3;i++){
    printf("seciminizi giriniz:");
    scanf("%d",&secim);
    int bilgisayar=rand()%3+1;
    if(secim==1){
        if(bilgisayar==1){
            printf("berabere");
        }
        if(bilgisayar==2){
            printf("bilgisayar kazandı");
            bilgisayar=bilgisayar+1;
        }
        if(bilgisayar==3){
            printf("oyuncu kazandı");
            oyuncu=oyuncu+1;
        }

    }
    else if(secim==2){
        if(bilgisayar==1){
            printf("bilgisayar kazandı");
            bilgisayar=bilgisayar+1;
        }
        if(bilgisayar==2){
            printf("berabere");
        }
        if(bilgisayar==3){
            printf("oyuncu kazandı");
            oyuncu=oyuncu+1;
    }
   }
   else if (secim==3){
    if(bilgisayar==1){
        printf("oyuncu kazandı");
        oyuncu=oyuncu+1;
        }
        if(bilgisayar==2){
            printf("bilgisayar kazandı");
            bilgisayar=bilgisayar+1;
        }
        if(bilgisayar==3){
            printf("berabere");
        }
   }

else{
    printf("hatali bir giris yeniden deneyiniz!");
}
}
if(bilgisayar>oyuncu){
    printf("kaybettiniz!bilgisayar kazandı!! %d - d%",bilgisayar,oyuncu);

}
else if (bilgisayar<oyuncu){
    printf("kazandınız!! %d - %d",oyuncu,bilgisayar);

}
else if (bilgisayar=oyuncu){
    printf("berabere!bir el daha oynayınız..");
}
return 0;
}

