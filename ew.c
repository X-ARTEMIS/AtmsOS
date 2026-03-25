#include <stdio.h>

int main() {
    double firstNumber;
    double secondNumber;
    double answer;
    double operator;

    printf("Enter your first number\n");
    scanf("%lf",&firstNumber);
    printf("Enter your operator\n");
    scanf("%c", operator);
    printf("Enter your second number\n");
    scanf("%lf", secondNumber);

    // th you can't use switches on chars in C?
    // switches have such strange progression
    // in C, they only work on integers
    // in C++ they work on chars too
    // in C# they work on strings

    if (operator == '*') {
        answer = firstNumber * secondNumber;
    }

    else if (operator == '/') {
        answer = firstNumber / secondNumber;
    }

    else if (operator == '+') {
        answer = firstNumber + secondNumber;
    }

    else if (operator == '-') {
        answer = firstNumber + secondNumber;
    }

    else {
        printf("Invalid something\n");
        return 1;
    }

    printf("Your answer is %d", answer);
    printf("************************");

    // I hate C C++ is far superior. In C++ we trust
    // never coding C again
}
