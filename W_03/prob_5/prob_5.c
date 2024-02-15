#include <stdio.h>

int Fibonacci(int n)
{
    if (n <= 1)
        return n;
    else
        return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main(void) 
{
  int x;
  printf("Enter a number :");
  scanf("%d",&x);

  printf("\nFibonacci(%d) = %d\n", x, Fibonacci(x));
  
  // 3ayzeen bonus ba2a >_>
  return 0;
}