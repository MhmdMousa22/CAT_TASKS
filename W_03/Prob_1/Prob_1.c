#include <stdio.h>

static double GetMax(double x, double y)
{
  double max;
  if(x>y)
    max = x;
  else
    max = y;
  return max;
}
int main(void) 
{
  double x, y;
  printf("Enter 2 numbers :");
  scanf( "%lf %lf", &x, &y);

  double max = GetMax(x, y);
  printf("\nThe max number is : %.2lf", max);
  return 0;
}

