#include <stdio.h>

int main(void) 
{
  float x;
  printf("Enter your grade : ");
  scanf("%f",&x);

  if (x <= 100 && x >= 85.0)
   { printf("Excellent");}

  else if (x < 85 && x >= 75.0)
   { printf("Very Good");}

  else if (x < 75 && x >= 65.0)
   { printf("Good");}

  else if (x < 65 && x >= 50.0)
   { printf("Passed");}

  else if (x < 50 && x >= 0)
   { printf("Failed");}
    
  else
   { printf("Invalid");}
}