#include <stdio.h>

int main(void) 
{
  int x;
  printf("Enter a number: ");
  scanf("%d", &x);
  printf("\n");
  
  for(int i = 1; i <= 12; i++)
    {
      printf("%d x %d = %d\n", x, i, x*i);
    }
  
  return 0;
}