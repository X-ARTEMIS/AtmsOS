#include <stdio.h>

int main() {
    double firstNumber;
    double secondNumber;
    double answer;
    char operator;

    printf("Enter your first number\n");
    scanf(" %lf",&firstNumber);
    printf("Enter your operator\n");
    scanf(" %c", &operator);
    printf("Enter your second number\n");
    scanf(" %lf", &secondNumber);

    switch(operator) {
        case '*':
            answer = firstNumber * secondNumber;
            break;
        case '-':
            answer = firstNumber - secondNumber;
            break;
        case '+':
            answer = firstNumber + secondNumber;
            break;
        case '/':
            answer = firstNumber * secondNumber;
            break;
        default:
            printf("Invalid something\n");
            return 1;
    }

    printf("Your answer is %lf\n", answer);
    printf("************************");

    // I hate C C++ is far superior. In C++ we trust
    // never coding C again
}
