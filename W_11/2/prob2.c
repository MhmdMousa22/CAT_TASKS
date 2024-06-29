#include <stdio.h>

int main(void) {

    printf("\t\t\t\t\tEnter (-1) to exit program...\t\t\t\t\t\n");

    while(1) {
        int input;
        printf("\nEnter Year : ");
        scanf("%d", &input);

        if(input == -1) break;

        else if ( (input % 400 == 0) || (input % 4 == 0 && input % 100 != 0) ) {
            printf("Leap Year\n");
        } else {
            printf("NOT Leap Year\n");
        }
    }
    printf("Exiting...");
    return 0;
}