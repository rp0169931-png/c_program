#include <stdio.h>

int main(void) {
    char op;
    float num1, num2;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+,-,*or/): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &num2);

    if (op == '+') {
        printf("Sum = %.2f\n", num1 + num2);
    }
    else if (op == '-') {
        printf("Subtraction = %.2f\n", num1 - num2);
    }
    else if (op=='*'){
        printf("multiply=%.2f\n",num1*num2);
    }
    else if (op=='/'){
        printf("Devide=%.2f\n",num1/num2);
    }
    else {
        printf("Error: Invalid operator.\n");
    }

    return 0;
}