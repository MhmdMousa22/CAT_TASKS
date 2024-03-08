#include <stdio.h>
#include <string.h>

int main() {
    int n = 1;
    while(1) {
        char str[250], c;

        printf("Enter a string: ");
        scanf(" %[^\n]", str);

        printf("Enter a character: ");
        scanf(" %c", &c);

        char *result = strchr(str, c);

        if (result != NULL) {
            size_t index = result - str;
            printf("'%c' is found at index %zu\n", c, index);
        } else {
            printf("'%c' not found in the string.\n", c);}

        printf("\nEnter (0) to Exit :");
        scanf("%d" ,&n);
        if(n == 0) break;
    }
    return 0;
}
