#include <stdio.h>

int main(void)
{
float x,y;
  
printf("Enter amount : ");
scanf("%f", &x);

  y = x*1.05;
printf("The value after tax : $%.2f", y);
}
