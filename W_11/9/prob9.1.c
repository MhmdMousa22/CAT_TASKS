#include <stdio.h>
#include <string.h>

int binaryToDecimal(char binary[]) {
    int length = strlen(binary);
    int decimal = 0;
    int base = 1;

    for (int i = length - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += base;
        }
        base *= 2;
    }

    return decimal;
}

int main() {
    char binary[100];
    int ex;
    while(1) {
        aa:
        printf("\nEnter a binary number: ");
        scanf("%99s", binary);

        int length = strlen(binary);
        for (int i = 0; i < length; i++) {
            if (binary[i] != '0' && binary[i] != '1') {
                printf("Invalid binary number..Try again\n");
                goto aa;
            }
        }

        int decimal = binaryToDecimal(binary);

        printf("%s in Binary = %d in Decimal\n", binary, decimal);

        printf("\nEnter (-1) to Exit : ");
        scanf("%d", &ex);
        if(ex == -1) break;
    }
    printf("\n>>>>Exiting<<<<");
    return 0;
}
