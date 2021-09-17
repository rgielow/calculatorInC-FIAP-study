#include <printf.h>

void sum(float firstNumber, float secondNumber) {
    printf("O resultado da  soma é: %0.2f", (firstNumber + secondNumber));
}

void subtraction(float firstNumber, float secondNumber) {
    printf("O resultado da subtração é: %0.2f", (firstNumber - secondNumber));
}

void multiplication(float firstNumber, float secondNumber) {
    printf("O resultado da multiplicação é: %0.2f", (firstNumber * secondNumber));
}

void division(float firstNumber, float secondNumber) {
    printf("O resultado da divisão é: %0.2f", (firstNumber / secondNumber));
}