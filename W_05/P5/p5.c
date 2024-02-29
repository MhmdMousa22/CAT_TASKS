#include <stdio.h>

int main(void) 
{
  int x = 5, y = 7, z = 14;
  int* px = &x;
  int* py = &y;
  int* pz = &z;
  printf("x = %d , y = %d , z = %d, px = %p , py = %p, pz = %p , *px = %d , *py = %d , *pz = %d", x, y, z, px, py, pz, *px, *py, *pz);
  printf("\nswapping pointers.\n");
  pz = px; px = py; py = pz;
  printf("After swapping :\nx = %d , y = %d , z = %d, px = %p , py = %p, pz = %p , *px = %d , *py = %d , *pz = %d", x, y, z, px, py, pz, *px, *py, *pz);
  return 0;
}