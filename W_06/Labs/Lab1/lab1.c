#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *marks = NULL;
    int subjects, i;

    printf("Enter the number of subjects: ");
    scanf("%d", &subjects);

    marks = (int *)malloc(subjects * sizeof(int));

    if (marks == NULL) {
        printf("Memory allocation failed.\n");  return 1;}
    for (i = 0; i < subjects; i++) {
        printf("Enter marks for Subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        marks = (int *)realloc(marks, (i + 2) * sizeof(int));

        if (marks == NULL) {
            printf("Memory reallocation failed.\n");  return 1;}
    }

    printf("\nStudent's Marks:\n");
    for (i = 0; i < subjects; i++) {
        printf("Subject %d: %d\n", i + 1, marks[i]);
    }

    free(marks); //Never forget to freeee.
    return 0;
}
