#include <stdio.h>

int main(void) 
{
  //Login Code ^_^
  const int ID = 12345;
  const int PASS = 88888888;
  int id, pass;
  
  printf("Enter your ID: ");
  scanf("%d", &id);

  if (id == ID)
  {
    for(int i = 0; i < 3; i++)
      {
        printf("\nEnter your password: ");
        scanf("%d", &pass);
        if (pass == PASS)
        {
          printf("\nWELCOME TO THE SYSTEM!");
          break;
        }
        else
        {
          printf("You are not registered\n"); 
        }
      }
    if (pass != PASS)
    {
      printf("\nNo more tries");
    }
  }
  else
  {
    printf("Wrong ID");  
  }
  return 0;
}