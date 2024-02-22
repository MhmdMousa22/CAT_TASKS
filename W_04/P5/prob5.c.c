#include <stdio.h>

int main(void) 
{
  int x[5][5];

  for(int i=0; i<5; i++)
    {
      printf("\nEnter elements of row %d : ", i+1);
      for(int j=0; j<5; j++)
        {
          scanf("%d", &x[i][j]);
        }
    }

  printf("\n\n\nRows total: ");
  for(int i=0; i<5; i++)
  {
    int sum = 0;
    for(int j=0; j<5; j++)
      {
        sum += x[i][j];
      }
    printf(" %d", sum);
  }
  printf("\n\nColumns total: ");
  for(int i=0; i<5; i++)
  {
    int sum = 0;
    for(int j=0; j<5; j++)
      {
        sum += x[j][i];
      }
    printf(" %d", sum);
  }
  return 0;
}