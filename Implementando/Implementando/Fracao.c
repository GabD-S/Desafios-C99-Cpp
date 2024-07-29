#include <stdio.h>

// Função para somar frações
void somadefrac(int a, int b, int c, int d, int *denominador, int *numerador)
{
    *denominador = b * d;
    *numerador = (a * d) + (c * b);
}

// Função para calcular o Mínimo Múltiplo Comum (MMC)
void mmc(int b, int d, int *mmcno)
{
    int temp_b = b, temp_d = d;
    int maior, menor, resto;

    if (b > d)
    {
        maior = b;
        menor = d;
    }
    else
    {
        maior = d;
        menor = b;
    }

    while (menor != 0)
    {
        resto = maior % menor;
        maior = menor;
        menor = resto;
    }

    *mmcno = (temp_b * temp_d) / maior; // MMC = (b * d) / MDC
}

int main(void)
{
    int a, b, c, d;
    int denominador, numerador, mmcno, numerador2;

    // Ler os valores
    printf("Digite os valores para\n a  +  c\n----  ----\n b     d\n ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Chamar a função para somar frações
    somadefrac(a, b, c, d, &denominador, &numerador);

    // Calcular o MMC
    mmc(b, d, &mmcno);

    // Calcular o numerador correspondente ao MMC
    numerador2 = (mmcno / b) * a + (mmcno / d) * c;

    // Imprimir o resultado
    printf(" %d\n----\n %d\n", numerador, denominador);
    printf("----------------------------------------------\n");
    printf(" %d\n----\n %d\n", numerador2, mmcno);

    return 0;
}
