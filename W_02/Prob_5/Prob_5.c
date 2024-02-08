#include <stdio.h>

int main(void) 
{
 float x, y, z;
  printf("Enter 3 numbers :");
  scanf( "%f %f %f", &x, &y, &z);

  if (x>y && x>z)
   { printf("\n%.2f is the Maximum number",x);}

  else if (y>x && y>z)
   { printf("\n%.2f is the Maximum number",y);}

  else 
   { printf("\n%.2f is the Maximum number",z);}
  
}