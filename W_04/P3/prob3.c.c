#include <stdio.h>

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
  
  printf("\nUnique elements in the Array: \n");
  for(int i=0; i<size; i++)
    {
      int j;
      for(j=0; j<i; j++)
        {
          if(x[i] == x[j])
            break;
        }
      if(i == j)
        printf("%d ", x[i]);
    }
  return 0;
}