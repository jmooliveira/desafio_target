#include <stdio.h>
/*2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre 
será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), 
escreva um programa na linguagem que desejar onde, informado um número, ele calcule a 
sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou 
não a sequência.

IMPORTANTE: Esse número pode ser informado através de qualquer entrada de sua preferência
ou pode ser previamente definido no código;*/

int fibonacci(int num);

int main(void)
{
    int numero = 0;

    // indica o que o programa pede e faz a entrada do dado
    printf("Entre com o valor inteiro: ");
    scanf("%d", &numero);

    // Chama a função que verifica se é um valor dentro da sequencia de fibonacci
    if (fibonacci(numero))
        printf("%d pertence a sequência de fibonacci\n", numero);
    else
        printf("%d não pertence a sequência de fibonacci\n", numero);

    return 0;
}

int fibonacci(int num)
{
    // Declara a variável que soma a sequência e o indice 0 e 1 da mesma.
    int sequencia = 0;
    int indice0 = 0;
    int indice1 = 1;

    if (num == 0)
        return 1;
    else if (num == 1)
        return 1;
    else 
        {
            // Faz a atribuição do valor sequancia e o swap das variaveis indice 0 e 1 enquanto for menor que num.
            // Se num for igual a sequencia, esse valor faz parte de fibonacci e retorna true.
            while (sequencia <= num)
            {
                sequencia = indice0 + indice1;
                indice0 = indice1;
                indice1 = sequencia;
                if (sequencia == num)
                {
                    return 1;
                }
            }
        }
    return 0;
}

/*
sequencia       f f+(i-1)
fibonacci   0 1 1 2 3 5 8 13 21 ...
indice      0 1 2 3 4 5 6 7  8  ... 
*/
