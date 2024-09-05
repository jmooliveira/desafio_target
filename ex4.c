#include <stdio.h>

/*
4) Dado o valor de faturamento mensal de uma distribuidora, detalhado por estado:
• SP – R$67.836,43
• RJ – R$36.678,66
• MG – R$29.229,88
• ES – R$27.165,48
• Outros – R$19.849,53
*/

int main(void)
{
    // Declaração de variáveis de dados do faturamento
    double faturamento[5] = {67836.43, 36678.66, 29229.88, 27165.48, 19849.53};
    double total = 0.0;
    int i = 0;
    char *cidades[5] = {"SP", "RJ", "MG", "ES", "Outros"};
    
    // Iteração para o valor total
    while (i < 5)
    {
        total = total + faturamento[i];
        i++;
    }

    // Impressão do percentil com relação ao total
    for (int i = 0; i < 5; i++)
    {
        printf("Percentual do faturamento de %s é %.2f\n", cidades[i], (faturamento[i]/total*100));
    }

}