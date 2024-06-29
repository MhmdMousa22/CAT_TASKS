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
    int max, min, exit;

    while(1) {
        int size;
        printf("\nEnter size of array : ");
        scanf("%d", &size);
        int numbers[size];
        printf("\nEnter %d numbers : ", size);
        for (int i = 0; i < size; i++) {
            scanf("%d", &numbers[i]);
        }

        findMaxMin(numbers, size, &max, &min);

        printf("Maximum num in Array : %d\n", max);
        printf("Minimum num in Array : %d\n", min);

        printf("\nEnter (-1) to Exit : ");
        scanf("%d", &exit);
        if(exit == -1) break;

    }
    printf("\n>>>>Exiting<<<<");
    return 0;
}
