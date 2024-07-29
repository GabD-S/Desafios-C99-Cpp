#include <stdio.h>
#include <stdlib.h>

unsigned contaEscadinhas(int *, unsigned short);

int main()
{
    unsigned short indice;
    unsigned short tamanhoSequencia;

    scanf("%hu", &tamanhoSequencia);

    int numeros[tamanhoSequencia];

    for (indice = 0; indice < tamanhoSequencia; ++indice)
        scanf("%d", &numeros[indice]);

    printf("%u\n", contaEscadinhas(numeros, tamanhoSequencia));
}

unsigned contaEscadinhas(int *numeros, unsigned short tamanho)
{
    unsigned short indice;
    int diferencaAnterior, diferencaAtual, quantidadeEscadinhas;

    if (tamanho == 1 || tamanho == 2)
        return 1;

    quantidadeEscadinhas = 1;
    diferencaAnterior = numeros[0] - numeros[1];

    for (indice = 2; indice < tamanho; ++indice)
    {
        diferencaAtual = numeros[indice - 1] - numeros[indice];
        if (diferencaAtual != diferencaAnterior)
        {
            diferencaAnterior = diferencaAtual;
            quantidadeEscadinhas++;
        }
    }

    return quantidadeEscadinhas;
}
