#include <stdio.h>
#include <string.h>

#define Max 10001
char dicionario[Max][Max];

int main(void)
{
    int tamanho, repet_buscador;
    char buscador[Max];

    printf("Digite o numero de pares chave-valor no dicionario:\n");
    scanf("%d", &tamanho);

    // Leitura dos pares chave-valor
    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite os dados chave e em seguida os dados guardados:\n");
        scanf("%s %s", dicionario[i], dicionario[i + 1]);
        i++; // Avança para o próximo par chave-valor
    }

    printf("\n");
    printf("-----------------------------\n");
    printf("\n");

    printf("Quantas palavras voce quer localizar:\n");
    scanf("%d", &repet_buscador);

    // Busca das palavras-chave
    for (int p = 0; p < repet_buscador; p++)
    {
        int encontrado = 0; // Reinicia o indicador de encontrado a cada iteração
        printf("Informe agora a chave que você pretende buscar:\n");
        scanf("%s", buscador);

        // Busca pela chave no dicionário
        for (int i = 0; i < tamanho; i += 2)
        {
            if (strcmp(buscador, dicionario[i]) == 0)
            {
                printf("Resultado encontrado: %s\n", dicionario[i + 1]);
                encontrado = 1;
                break; // Encerra a busca ao encontrar o resultado
            }
        }

        if (encontrado == 0)
        {
            printf("Resultado nao encontrado\n");
        }
    }

    return 0;
}
