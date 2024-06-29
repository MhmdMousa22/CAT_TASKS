#include <stdio.h>

int main() {
    int num, pow;
    printf("...Enter (-1) to Exit...");

    while(1) {
        int res = 1;
        printf("\n\nEnter number : ");
        scanf("%d", &num);
        if(num == -1) break;

        printf("Enter a Power : ");
        scanf("%d", &pow);

        for(int i = 0; i<pow; i++){
            res *= num;
        }
        printf("RESULT = %d", res);
    }
    printf("\n>>>>Exiting<<<<");
    return 0;
}
