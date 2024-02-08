#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number : ");
    scanf("%d",&rows);
    for (int i=1; i<=2*rows; i++)
    {
        if (i<=rows)
        {
            for (int j=1;j<=rows-i;j++)
            {
                printf(" ");
            }
            for (int k=1;k<=2*i-1;k++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}