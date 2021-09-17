#include <printf.h>
/*Esse arquivo contem as 4 funções que fazem as operações da calculadora, recebendo os valores por parametro
 * e printando o resultado no formato de número float arredondado para 2 casas decimais*/
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