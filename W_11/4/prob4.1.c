#include <stdio.h>

int main() {
    int num, digit;
    printf("...Enter (-1) to Exit...\n");

    while(1) {
        int  sum = 0;
        printf("\nEnter number to find sum of digits : ");
        scanf("%d", &num);
        if(num == -1) break;

        while (num != 0) {
            digit = num % 10;
            sum += digit;
            num /= 10;
        }

        printf("Sum of digits: %d\n", sum);
    }
    printf("\n>>>>Exiting<<<<");
    return 0;
}
