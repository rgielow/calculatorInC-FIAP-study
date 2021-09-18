#import <printf.h>
#import "calculator_results.c"

/* Aqui nesse arquivo eu tenho uma função pública que chamo na mais para mostrar as opções de calculadora e controlar quando o
 * user quiser sair do programa, novamente deixei esse arquivo pelo responsável somente pela parte de mostrar as opções, a parte do cálculo
 * eu deixei separado em outra classe. */

void calculator() {
    /* Aqui declarei as variáveis necessárias para poder controlar e fazer o cálculo,
     * optei por declarar como float as usadas no cálculo para o programa aceitar cáculos de números reais,
     * e inteiro na variavel de controle de opção porque só utilizam numeros inteiros. */
    int operationPick = 1;
    float firstNumber, secondNumber;

    /* Aqui utilizei o laço while para controlar as escolhas de tipo de cálculo escolhida pelo user e se ele quer sair ou não do programa.*/
    while (operationPick != 0) {
        printf("\n=========================Novo Calculo======================\n\n");
        printf("1- Adicao\t");
        printf("2- Subtracao\t");
        printf("3- Divisao\t");
        printf("4- Multiplicacao\t");
        printf("0- Sair\n");
        printf("Digite o numero correspondente a opção: ");

        scanf("%i", &operationPick);

        /*Se pela primeira vez o usuário já digita um valor inválido ou 0, não tem porque pedir os números.
         * Então já encerro o programa aqui. */
        if (operationPick == 0 || operationPick > 4) {
            printf("\nEncerrando o programa");
            break;
        }
        /*leitura dos números e ao mesmo tempo atribuir ele a váriavel.*/
        printf("\nDigite o primeiro numero: ");
        scanf("%f", &firstNumber);

        printf("Digite o segundo numero: ");
        scanf("%f", &secondNumber);

        /*Aqui utilizei o padrão switch para poder direcionar qual cálculo o programa deve fazer segundo a opção escolhida*/
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
