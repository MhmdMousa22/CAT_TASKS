#include <stdio.h>

int repeated(int arr[], int n)
{
  int num;
  for(int i=0; i<n; i++)
  {
    int j;
    for(j=0; j<i; j++)
      {
        if(arr[i] == arr[j])
          break;
      }
    if(i != j)
      num = arr[i];
  }
  return num;
}
int main(void) 
{
  int size;
  printf("Enter number of elements in the Array: ");
  scanf("%d", &size);

  printf("\nEnter elements in the Array: \n");
  int x[size];
  for(int i = 0; i<size; i++)
    {
      printf("Element %d: ", (i+1));
      scanf("%d", &x[i]);
    }

  int num = repeated(x, size);
  printf("\nThe repeating number is: %d", num);
  return 0;
}