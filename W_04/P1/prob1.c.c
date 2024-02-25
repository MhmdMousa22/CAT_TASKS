#include <stdio.h>

void swap(int *a,int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
void sort(int arr[],int n, int bool)
{
  if (bool == 1)
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
   }
  else
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
    }
  printf("Sorted Array: ");
  for(int i=0; i<n; i++)
    {
      printf("%d  ", arr[i]);
    }
}
int main(void) 
{
  while(1)
    {
  int size, i = 0;
  aa: printf("Enter the number of elements (-1 to exit): ");
  scanf("%d", &size);

  if (size == -1) {
          printf("Program exited.\n");
          break;}
  
  if (size <= 0)
  {printf("Invalid input, Positive integers only...");
   goto aa;}
  
  int x[size];
  printf("\nEnter the elements of the array: \n");
  for (i = 0; i<size; i++)
    {
      printf("Element %d: ", (i+1));
      scanf("%d", &x[i]);
    }
  
  int bool;
  AA: printf("\nEnter 0 for ascending or Enter 1 for descending: ");
  scanf("%d", &bool);
  if (bool != 0 && bool != 1)
   {printf("Invalid input, try again..."); goto AA;}

  sort(x, size, bool);
  printf("\n\n");
  }
 return 0;
}
