#include <stdio.h>

int SUM(int* x, int* y)
{
  int sum = *x + *y;
  return sum;
}
int main(void) 
{ int n;
  while(1)
    {
      int x, y;
      printf("Enter two numbers: ");
      scanf("%d %d", &x, &y);
      printf("Summation of 2 numbers = %d", SUM(&x, &y));
      printf("\nEnter (0) to exit: ");
      scanf("%d", &n);
      if(n == 0){break;}
    }
  return 0;
}