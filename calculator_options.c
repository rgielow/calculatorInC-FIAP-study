#include <printf.h>
#include "calculator_results.c"

void calculator() {
    int operationPick = 1;
    float firstNumber, secondNumber;

    while (operationPick != 0) {
        printf("\n=========================Novo Calculo======================\n\n");
        printf("1- Adicao\t");
        printf("2- Subtracao\t");
        printf("3- Divisao\t");
        printf("4- Multiplicacao\t");
        printf("0- Sair\n");
        printf("Digite o numero correspondente a opção: ");

        scanf("%i", &operationPick);

        if (operationPick == 0 || operationPick > 4) {
            printf("\nEncerrando o programa");
            break;
        }

        printf("\nDigite o primeiro numero: ");
        scanf("%f", &firstNumber);

        printf("Digite o segundo numero: ");
        scanf("%f", &secondNumber);

        switch (operationPick) {
            case 1:
                sum(firstNumber, secondNumber);
                break;

            case 2:
                subtraction(firstNumber, secondNumber);
                break;

            case 3:
                division(firstNumber, secondNumber);
                break;

            case 4:
                multiplication(firstNumber, secondNumber);
                break;

            default:
                printf("\nOpção inválida, digite o comando correto");
                calculator();
                break;
        }
    }
}
