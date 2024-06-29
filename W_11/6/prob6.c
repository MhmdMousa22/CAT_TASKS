#include <stdio.h>

int main() {
    int size;

    printf("...Enter (-1) to Exit program...");
    while(1) {
        int even = 0, odd = 0;
        printf("\n\nEnter size of array : ");
        scanf("%d", &size);
        if(size == -1) break;
        int arr[size];

        printf("Enter %d Elements to array: ", size);
        for (int i = 0; i < size; i++) {
            scanf("%d", &arr[i]);
            (arr[i] % 2 == 0) ? even++ : odd++;
        }

        printf("\nTotal Even elements : %d", even);
        printf("\nTotal Odd elements : %d", odd);
    }
    printf("\n>>>>Exiting<<<<");
    return 0;
}
