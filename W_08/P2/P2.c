#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define STUDENTS 10
#define SUBJECTS 4

typedef struct {
    int programming;
    int data_structures;
    int discrete_math;
    int algorithms;
} Grades;

void modifyGrades(int studentID, Grades grades[]) {
    printf("Enter new grades for Student ID %d:\n", studentID);
    printf("Programming: ");
    scanf("%d", &grades[studentID - 1].programming);
    printf("Data Structures: ");
    scanf("%d", &grades[studentID - 1].data_structures);
    printf("Discrete Math: ");
    scanf("%d", &grades[studentID - 1].discrete_math);
    printf("Algorithms: ");
    scanf("%d", &grades[studentID - 1].algorithms);
    printf("Grades updated successfully.\n");
}

int main() {
    Grades grades[STUDENTS];
    int studentID;

    srand(time(NULL));
    for (int i = 0; i < STUDENTS; i++) {
        grades[i].programming = rand() % 151;
        grades[i].data_structures = rand() % 101;
        grades[i].discrete_math = rand() % 151;
        grades[i].algorithms = rand() % 101;
    }

    while (1) {
        printf("\nEnter student ID (1 to 10) to view grades or 0 to exit: ");
        scanf("%d", &studentID);

        if (studentID == 0) {
            printf("Exiting..\n");
            break;
        }

        if (studentID < 1 || studentID > STUDENTS) {
            printf("Invalid student ID. Please enter a number between 1 and 10.\n");
            continue;
        }

        printf("Grades for Student ID %d:\nProgramming: %d\nData Structures: %d\nDiscrete Math: %d\nAlgorithms: %d\n", studentID, grades[studentID - 1].programming, grades[studentID - 1].data_structures, grades[studentID - 1].discrete_math, grades[studentID - 1].algorithms);

        printf("\nDo you want to modify grades for this student? (1 for yes, 0 for no): ");
        int choice;
        scanf("%d", &choice);
        if (choice == 1) {
            modifyGrades(studentID, grades);
        }
    }

    return 0;
}
