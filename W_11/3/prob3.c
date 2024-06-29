#include <stdio.h>

int main() {
    char op;
    double x, y;

    printf("...Enter (E) to Exit...\n");
    while(1) {

        printf("\nEnter the operator (+,-,*,/) : ");
        scanf(" %c", &op);
        if(op == 'e' || op == 'E') break;

        printf("Enter the operands : ");
        scanf("%lf", &x);
        scanf("%lf", &y);

        switch (op) {
            case '+':
                printf("%.2lf + %.2lf = %.2lf", x, y, (x + y));
                break;
            case '-':
                printf("%.2lf - %.2lf = %.2lf", x, y, (x - y));
                break;
            case '*':
                printf("%.2lf * %.2lf = %.2lf", x, y, (x * y));
                break;
            case '/':
                if(y == 0) printf(">>error..(num/0 --> ERR)<<");
                else printf("%.2lf / %.2lf = %.2lf", x, y, (x / y));
                break;
            default:
                printf("Invalid Input...Try again");
                break;
        }
    }
    printf("\n>>>>Exiting<<<<");
    return 0;
}
