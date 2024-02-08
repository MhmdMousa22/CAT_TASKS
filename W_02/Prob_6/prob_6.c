#include <stdio.h>

int main(void) 
{
  int x;
  
  for(;;)
    {
      printf("Enter the result of 3x4 : ");
      scanf("%d",&x);
      
      if(x==12)
      {
        printf("Thanks");
        break;
      }
      else 
      {
        printf("Try again\n");
        //continue;
      }
    }
}