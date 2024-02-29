#include <stdio.h>

void scalar(int arr1[], int arr2[], int n, int res[])
{
  for(int i = 0; i < n; i++)
    {
        res[i] = arr1[i] * arr2[i];
    }
}
int main(void) 
{
  int x[] = {2, 5, 4, 3, 8, 3};
  int y[] = {4, 5, 6, 2, 7, 8};
  int size = sizeof(x)/sizeof(x[0]);
  int result[size];
  scalar(x, y, size, result);
  for(int i = 0; i<size; i++)
  {
    printf("%d ", result[i]);
  }
  return 0;
}