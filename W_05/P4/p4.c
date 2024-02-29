#include <stdio.h>

void swap(int *a, int *b);
void bubblesorting(int* arr, int n);
int main(void) 
{
  int arr[] = {1, 4, 5, 6, 7, 3, 9, 2, 8};
  int size = sizeof(arr) / sizeof(arr[0]);
  bubblesorting(arr, size);
  return 0;
}
void swap(int *a, int *b)
{ int temp = *a;
  *a = *b;
  *b = temp;}
void bubblesorting(int* arr, int n)
{
    for (int i = 0; i < n - 1; i++)
      {
        for (int j = 0; j < n - i - 1; j++)
          { if (arr[j] > arr[j + 1])
              {swap(&arr [j], &arr [j + 1]);}
          }
      }
  printf("After sorting: ");
  for(int i = 0; i < n; i++)
    {
      printf("%d ",arr[i]);
    }
}
