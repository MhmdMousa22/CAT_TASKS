#include <stdio.h>

void swap(int *a,int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
void sort(int arr[],int n)
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
  sort(x, size);
  printf("\n2nd Largest Element in Array: %d", x[1]);
  
  return 0;
}