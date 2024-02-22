#include <stdio.h>

void swap(int *a,int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
void ascending(int arr[],int n)
{
  for(int i=0; i<n-1; i++)
    {
      for(int j = 0; j< n-i-1; j++)
        {
          if(arr[j]>arr[j+1])
          {
            swap(&arr[j], &arr[j+1]);
          }
        }
    }
  printf("The sorted Array is: ");
  for(int i=0; i<n; i++)
    {
      printf("%d  ", arr[i]);
    }
}
void descending(int arr[],int n)
{
  for(int i=0; i<n-1; i++)
    {
      for(int j = 0; j< n-i-1; j++)
        {
          if(arr[j]<arr[j+1])
          {
            swap(&arr[j], &arr[j+1]);
          }
        }
    }
  printf("The sorted Array is: ");
  for(int i=0; i<n; i++)
    {
      printf("%d  ", arr[i]);
    }
}

int main(void) 
{
  int size, i = 0;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &size);
  int x[size];

  printf("\nEnter the elements of the array: \n");
  for (i = 0; i<size; i++)
    {
      printf("Element %d: ", (i+1));
      scanf("%d", &x[i]);
    }
  int bool;
  printf("\nEnter 0 for ascending or Enter 1 for descending: ");
  scanf("%d", &bool);
  
  if (bool == 0)
  {
    ascending(x, size);
  }
  else if (bool == 1)
  {
    descending(x, size);
  }
  else 
    printf("Invalid input");
  return 0;
}