#include <stdio.h>
/*
5) Escreva um programa que inverta os caracteres de um string.

IMPORTANTE:
a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;
b) Evite usar funções prontas, como, por exemplo, reverse;
*/

int main(void)
{
    // Declaração das variáveis 
    char string[50];
    int contador = 0;
    int inicio = 0;
    int fim;
    char aux;

    // Obtenção da string
    printf("Digite a string: ");
    scanf("%s", string);
    //printf("String %s\n", string);

    // Atribuição do valor de contagem para tamanho real da string
    while(string[contador])
    {
        contador++;
    }

    fim = contador - 1;
    // Reversão da string obtida
    while (inicio < fim)
    {
        aux = string[inicio];
        string[inicio] = string[fim];
        string[fim] = aux;
        inicio++;
        fim--;
    }
    printf("String reverse: %s\n", string);

    return 0;
}