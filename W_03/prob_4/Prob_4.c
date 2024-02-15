#include <stdio.h>
#include <string.h>

int Login(char username[], char password[]) {
    
    char correctUser[] = "mo1234@mans";
    char correctPass[] = "olympiacus#1234";

    // Compare entered info with correct info
    // strcmp is used to compare strings
    if (strcmp(username, correctUser) == 0 && strcmp(password, correctPass) == 0)
      {
       return 1; 
      }
    else 
      {
        return 0;  
      } 
}

int main() {
    char enteredUser[20];
    char enteredPass[20];

    printf("Enter username: ");
    scanf("%s", enteredUser);

    printf("\nEnter password: ");
    scanf("%s", enteredPass);

    if (Login(enteredUser, enteredPass)) 
      {
        printf("\nLogin successful ^_*\n");
      } 
    else 
      {
        printf("\nLogin failed. Please check your username and password.\n");
      }

    return 0;
}