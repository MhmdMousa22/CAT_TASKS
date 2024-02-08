#include <stdio.h>

int main(void)
{
  int ID;
  
  printf("Enter your ID : ");
  scanf("%d", &ID);

 switch(ID)
   {
     case 1234:
     printf("Harry");
     break;

     case 5678:
     printf("Ron");
     break;

     case 1145:
     printf("Hermione");
     break;

     default:
     printf("Wrong ID");
     break;
   }

}