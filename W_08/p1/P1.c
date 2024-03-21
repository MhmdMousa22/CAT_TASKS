#include <stdio.h>

typedef struct employee {
    int salary, bonus, deductions;
} emp;

int main() {
    emp x[3]; int n = 0;
    char c[3][20] = {"Mohsen", "Maged", "Mariam"};
    while(1) {
        for (int i = 0; i < 3; i++) {
            printf("Enter Salary, bonus, deductions for %s :\n", c[i]);
            scanf("%d %d %d", &x[i].salary, &x[i].bonus, &x[i].deductions);
        }

        for (int i = 0; i < 3; i++) {
            printf("\nTotal value supplied by the finance team for %s : %d\n", c[i],
                   (x[i].salary + x[i].bonus - x[i].deductions));
        }
        printf("\nEnter (0) to exit:");
        scanf("%d", &n);
        if(n == 0) {
            printf("Exiting...");
            break;}
    }
    return 0;
}
