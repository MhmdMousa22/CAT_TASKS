#include <stdio.h>
void bubblesorting(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
      {
        for (j = 0; j < n - i - 1; j++)
          {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
          }
      }
  printf("After sorting: ");
  for(int i = 0; i < n; i++)
    {
      printf("%d ",arr[i]);
    }
}
int main(void) 
{
  int arr[] = {1, 4, 5, 6, 7, 3, 9, 2, 8};
  int size = sizeof(arr) / sizeof(arr[0]);
  bubblesorting(arr, size);
  return 0;
}