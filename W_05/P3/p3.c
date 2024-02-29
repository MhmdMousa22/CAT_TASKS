#include <stdio.h>

int scalar(int* x, int* y, int n)
{ int scl = 0;
  for(int i = 0; i < n; i++)
    {
        scl += x[i]*(y[i]);
    }
 return scl;
}
int main(void) 
{
  int x[] = {2, 5, 4, 3, 8, 3};
  int y[] = {4, 5, 6, 2, 7, 8};
  int size = sizeof(x)/sizeof(x[0]);
  int scl = scalar(x, y, size);
  printf("%d ", scl);
  return 0;
}
