//PROBLEM 3
#include <stdio.h>
#include <string.h>

void reversestring(char *str) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;}
}
int main() {
    int n = 1;
    while(1) {
        char str[250];
        printf("Enter a string: ");
        scanf(" %[^\n]", str);

        reversestring(str);
        printf("Reversed string: %s\n", str);

        printf("\nEnter (0) to Exit :");
        scanf("%d" ,&n);
        if(n == 0) break;
    }
    return 0;
}
