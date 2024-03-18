#include <stdio.h>
#include <string.h>

int main(void)

{
char username [13];
char password [13];

printf("Enter your username:");
scanf("%s",username);

printf("Enter your password:");
scanf("%s",password);

if (strcmp(username, "esmanur")== 0 && strcmp(password,"eralesmanur1")==0)
    {

printf("\nlogged in successfully\n");
    }

else {
    printf("\nIncorrect username or password,please try again:\n");
}

}
