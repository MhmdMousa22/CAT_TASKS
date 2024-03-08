#include <stdio.h>

void convertToUpperCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {str[i] = str[i] - 32;}}
}

int main() {
    int n = 1;
    while(1) {
        char str[250];

        printf("Enter a string in lowercase: ");
        scanf(" %[^\n]", str);

        convertToUpperCase(str);
        printf("Uppercase string: %s\n", str);

        printf("Enter (0) to Exit :");
        scanf("%d" ,&n);
        if(n == 0) break;
    }
    return 0;
}
