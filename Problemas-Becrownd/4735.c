#include <stdio.h>

#define MAX 100

void calcularCampoMinado(char campo[MAX][MAX], char resultado[MAX][MAX], int N, int M)
{
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (campo[i][j] == '*')
            {
                resultado[i][j] = '*';
            }
            else
            {
                int contagem = 0;
                for (int d = 0; d < 8; d++)
                {
                    int ni = i + dx[d];
                    int nj = j + dy[d];
                    if (ni >= 0 && ni < N && nj >= 0 && nj < M && campo[ni][nj] == '*')
                    {
                        contagem++;
                    }
                }
                resultado[i][j] = contagem + '0'; 
            }      
        }
    }
}

int main(void)
{
    int N, M;
    char campo[MAX][MAX], resultado[MAX][MAX];
    
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++)
    {
        scanf("%s", campo[i]);
    }

    calcularCampoMinado(campo, resultado, N, M);

    for (int i = 0; i < N; i++)
    {
        printf("%s\n", resultado[i]);
    }

    return 0;
}
