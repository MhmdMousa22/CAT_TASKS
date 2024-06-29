#include <stdio.h>
#include <string.h>

int main() {
    char source[100], copy[100];
    int i = 0;

    printf("\nEnter a string: ");
    fgets(source, sizeof(source), stdin);

    if (source[strlen(source) - 1] == '\n') {
            source[strlen(source) - 1] = '\0';
        }

    while (source[i] != '\0') {
            copy[i] = source[i];
            i++;
        }
    copy[i] = '\0';

    printf("Copied string: %s\n", copy);

    return 0;
}
