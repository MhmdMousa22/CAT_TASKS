#include <stdio.h>

void table(char *str, int* alpha, int* special, int* digit) {
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {(*alpha)++;}
        else if ((str[i] >= '0' && str[i] <= '9')) {(*digit)++;}
        else if (str[i] >= 32) {(*special)++;}
    }
}

int main() {
    int n = 1;
    while(1) {
        char str[250];
        printf("Enter a string : ");
        scanf(" %[^\n]", str);

        int alpha = 0, special = 0, digit = 0;
        table(str, &alpha, &special, &digit);

        printf("\nTotal number of ->\nAlphabets : %d\nDigits : %d\nSpecial Characters : %d", alpha, digit, special);

        printf("\nEnter (0) to Exit :");
        scanf("%d" ,&n);
        if(n == 0) break;
    }
    return 0;
}
