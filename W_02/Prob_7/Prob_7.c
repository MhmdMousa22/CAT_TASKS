#include <stdio.h>

int main(void) 
{
  double num[10];
  double sum = 0;

  printf("Enter 10 numbers : ");
  for(int i = 0; i < 10; i++)
    {
      scanf("%lf", &num[i]);
      sum += num[i];
    }
  double ave = sum/10;
  
  printf("\nSummation of the 10 numbers : %.2lf\n" ,sum);
  printf("Average of the 10 numbers : %.2lf" ,ave);
  return 0;
}