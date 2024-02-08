#include <stdio.h>

int main(void)
{
  int x;
  
  printf("Enter number : ");
  scanf("%d", &x);

 if (x % 2 == 0)
  {
     printf("%d is EVEN" ,x);
  } 
 else
  {
     printf("%d is ODD" ,x);
  }

}