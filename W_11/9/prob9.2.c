#include <stdio.h>

int main() {
    int num, bit, ex;
    while(1) {
        int res = 0;
        printf("\nEnter any number : ");
        scanf("%d", &num);

        printf("\nEnter nth bit to check (0-31) : ");
        scanf("%d", &bit);

        for (int i = 0; i < bit; i++) {
            num /= 2;
        }
        if(num%2 != 0) res = 1;
        printf("bit (%d) is set to %d", bit, res);

        printf("\n\nEnter (-1) to Exit : ");
        scanf("%d", &ex);
        if(ex == -1) break;
    }
    printf("\n>>>>Exiting<<<<");
    return 0;
}
