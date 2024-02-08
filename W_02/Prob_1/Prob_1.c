#include <stdio.h>

int main(void)
{
  float x;
  
  printf("Enter working hours a week : ");
  scanf("%f", &x);

  float salary = x * 50;

 if (x >= 40.0)
  {
     printf("Employer salary = %.2f" ,salary);
  } 
 else
  {
     salary = salary * 0.9;
     printf("Employer salary = %.2f" ,salary);
  }

}