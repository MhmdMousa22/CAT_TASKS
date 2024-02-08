#include <stdio.h>

int main(void) 
{
  int x;
  int fac = 1;
  printf("Enter a number: ");
  scanf("%d", &x);

  int y = x;
  while(y > 1)
    {
      fac = fac * y;

      y--;
    }
  printf("\nFactorial of %d is %d", x, fac);
  return 0;
}