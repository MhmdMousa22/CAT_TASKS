#include <stdio.h>

static int getnum(long int x)
{
  int i;
 for(i = 0; ; i++)
   {
     if (x != 0)
     {
       x /= 10;
     }
     else 
     {
       break;
     }
   }
  return i;
}

int main(void) 
{
  long int x;
  printf("Enter a number :");
  scanf( "%ld", &x);

  printf("\nNumber of digits in [%ld] is %d", x, getnum(x));
  return 0;
}