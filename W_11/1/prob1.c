#include <stdio.h>

int main() {
    int num;

    printf("..Enter (-1) to exit program..\n");
    while (1) {
        int zeros , ones = 0;

        printf("\nEnter a number: ");
        scanf("%d", &num);
        if(num == -1) break;

        while (num > 0) {

            if (num % 2 != 0) ones++;
            num /= 2;
        }
        zeros = 32 - ones;

        printf("Total number of zeros: %d\n", zeros);
        printf("Total number of ones: %d\n", ones);
    }

    printf("Exiting...");

    return 0;
}
