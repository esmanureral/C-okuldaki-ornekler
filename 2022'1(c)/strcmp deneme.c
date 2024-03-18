#include <stdio.h>
#include <stdlib.h>

int main()
{
    char username[10];
    char password [10];
    char ch;

    printf("enter your username");
    scanf("%s",username);

    printf("enter your password");
 for (int i=0;i<50;i++)
 {
     ch=getch();
     if(ch!=13)
     {
         password [i]=ch;
         ch= '*';
         printf("%c",ch);
     }
     else
        break;
 }

    if(strcmp(username,"esma")==0 && strcmp(password,"123")==0) {
        printf("\nLogged in succesfully\n");
    }
    else{
        printf("\nIncorrect or password,please try again!\n");
    }

}
