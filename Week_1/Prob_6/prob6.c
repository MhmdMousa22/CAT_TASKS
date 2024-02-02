#include <stdio.h>

int main(void)
{
    int x,y;
    printf("Enter 2 numbers : ");
    scanf("%d %d", &x ,&y);

    printf("\nArithmetical operations : ");
    printf("\nX + Y = %d\nX - Y = %d\nX * Y = %d\nX / Y = %d\nX %% y = %d\n" ,(x+y), (x-y), (x*y), (x/y), (x%y));

    printf("\nLogical operations : ");
    printf("\nX || Y = %d\nX && Y = %d\n!X = %d\n!Y = %d\n" ,(x||y), (x&&y), (!x), (!y));

    printf("\nBitwise operations : ");
    printf("\nX | Y = %d\nX & Y = %d\nX ^ y = %d\n~X = %d\n~Y = %d\nX >> 1 = %d\nX << 1 = %d\nY >> 1 = %d\nY << 1 = %d" ,(x|y), (x&y), (x^y), (~x), (~y), (x>>1), 
    (x<<1), (y>>1), (y<<1));
}