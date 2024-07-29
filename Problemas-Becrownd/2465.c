#include <stdio.h>
#include <string.h>

#define MAX 100

int tamanho, matriz[MAX][MAX], direcao[MAX][MAX], visitado[MAX][MAX];

void buscaProfundidade(int x, int y)
{
    if (x < 0 || x >= tamanho || y < 0 || y >= tamanho || visitado[x][y])
    {
        return;
    }

    visitado[x][y] = 1;
    int direcoes[4][2] = {{1, 0}, {0, -1}, {-1, 0}, {0, 1}};

    for (int i = 0; i < 4; i++)
    {
        int novoX = x + direcoes[i][0];
        int novoY = y + direcoes[i][1];
        if (novoX >= 0 && novoX < tamanho && novoY >= 0 && novoY < tamanho && !visitado[novoX][novoY] && matriz[novoX][novoY] >= matriz[x][y])
        {
            buscaProfundidade(novoX, novoY);
        }
    }
}

int main()
{
    scanf("%d", &tamanho);
    int inicioX, inicioY;
    scanf("%d %d", &inicioX, &inicioY);
    inicioX--;
    inicioY--; 

    memset(visitado, 0, sizeof(visitado));
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            scanf("%d", &matriz[i][j]);
            direcao[i][j] = 0;
        }
    }

    buscaProfundidade(inicioX, inicioY);

    int contador = 0;
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            if (visitado[i][j])
                contador++;
        }
    }

    printf("%d\n", contador);
    return 0;
}
