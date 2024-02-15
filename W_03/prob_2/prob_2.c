#include <stdio.h>
double x, y;
void swap();

int main(void) 
{
  printf("Enter 2 numbers :");
  scanf("%lf %lf", &x, &y);
  
  printf("\nBefore swapping, num_1 = %.1lf and num_2 = %.2lf\n", x, y);
  swap();
  printf("\nAfter swapping, num_1 = %.1lf and num_2 = %.2lf\n", x, y);
  
  return 0;
}
void swap()
{
  double s;
  s = x;
  x = y;
  y = s;
}