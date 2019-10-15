//u17021139 - Kevin Coetzee COS330 Practical 6

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(void){
    char *enteredPassword = malloc(8*sizeof(char));
    char *loggedInStatus = malloc(8*sizeof(char));

    strcpy(loggedInStatus, "notLoggedIn");
    printf("Enter your password to access the system: ");
    gets(enteredPassword);

    if(strcmp(enteredPassword, "SecretPassword")==0){
        printf("Your password is correct\n");
        loggedInStatus = "LoggedIn";
    }else{
        printf("You have entered the incorrect password\n");
    }

    if((strcmp(loggedInStatus, "notLoggedIn")!=0)){
        printf("You now have user privileges\n");
    }

    printf("enteredPassword value: %s\n", enteredPassword);
    printf("loggedInStatus value: %s\n", loggedInStatus);
}