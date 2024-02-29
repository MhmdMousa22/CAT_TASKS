#include <stdio.h>

int main(void) 
{
  int i = 10;
  printf("%d", i);
  int *p = &i;
  *p = 20;
  printf("\n%d", i);
  return 0;
}