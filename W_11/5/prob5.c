#include <stdio.h>

void findMaxMin(int arr[], int size, int *max, int *min) {
    *max = arr[0];
    *min = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}

int main() {
    int numbers[4];
    int max, min, exit;

    while(1) {
        printf("\nEnter 4 numbers : ");
        for (int i = 0; i < 4; i++) {
            scanf("%d", &numbers[i]);
        }

        findMaxMin(numbers, 4, &max, &min);

        printf("Maximum: %d\n", max);
        printf("Minimum: %d\n", min);

        printf("\nEnter (-1) to Exit : ");
        scanf("%d", &exit);
        if(exit == -1) break;

    }
    printf("\n>>>>Exiting<<<<");
    return 0;
}
