#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 1000

// Função para criar a matriz alocada dinamicamente
double **criando_mat(int lin, int col)
{
    double **Mat_A;

    // Alocando memória para as linhas
    Mat_A = (double **)malloc(lin * sizeof(double *));
    if (!Mat_A)
    {
        printf("Erro na alocação de memória\n");
        exit(1);
    }

    // Alocando memória para as colunas
    for (int i = 0; i < lin; i++)
    {
        
        Mat_A[i] = (double *)malloc(col * sizeof(double));
        if (!Mat_A[i])
        {
            printf("Erro na alocação de memória\n");
            exit(1);
        }
    }
    return Mat_A;
}

// Função para inserir dados na matriz
void inserindo_dado(double **Mat_A, int lin, int col)
{
    double Dado_insere;
    // Inserindo dados na matriz
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // printf("Insira o dado, Coluna[%d] e linha[%d]\n",i,j);
            scanf("%lf", &Dado_insere);
            Mat_A[i][j] = Dado_insere;
        }
    }
    printf("---------Matriz inicial-----------\n");
    
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%14.1lf ", Mat_A[i][j]);
        }
        printf("\n");
    }

    printf("------------------------\n");
}

// Função para trocar linhas da matriz
void swap_rows(double **mat, int row1, int row2, int col)
{
    for (int i = 0; i < col; i++)
    {
        double temp = mat[row1][i];
        mat[row1][i] = mat[row2][i];
        mat[row2][i] = temp;
    }
}

// Função para aplicar o método de Gauss
void Metodo_Gaus(double **Mat_A, int lin, int col)
{
    double lider = 0, baixo = 0, diag, dbx, res;

    for (int i = 0; i < lin; i++)
    {
        // Encontra o pivô máximo na coluna i
        double maxEl = fabs(Mat_A[i][i]);
        int maxRow = i;
        for (int k = i + 1; k < lin; k++)
        {
            if (fabs(Mat_A[k][i]) > maxEl)
            {
                maxEl = fabs(Mat_A[k][i]);
                maxRow = k;
            }
        }

        // Troca a linha atual com a linha do pivô máximo
        swap_rows(Mat_A, maxRow, i, col);

        // Faça todos os elementos abaixo deste pivô em 0
        for (int k = i + 1; k < lin; k++)
        {
            double c = -Mat_A[k][i] / Mat_A[i][i];
            for (int j = i; j < col; j++)
            {
                Mat_A[k][j] += c * Mat_A[i][j];
            }
        }

        // Imprimir matriz após cada passo
        printf("Matriz após eliminar coluna %d:\n", i);
        for (int m = 0; m < lin; m++)
        {
            for (int n = 0; n < col; n++)
            {
                printf("%14.3f ", Mat_A[m][n]);
            }
            printf("\n");
        }
    }

    printf("--------------Matriz Final-------------\n");
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%14.3f ", Mat_A[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    int col, lin;

    printf("DIGITE O TAMANHO DA MATRIZ \n");
    scanf("%d %d", &col, &lin);

    double **Mat_A = criando_mat(lin, col);

    printf("Digite os elementos da matriz:\n");
    inserindo_dado(Mat_A, lin, col);

    Metodo_Gaus(Mat_A, lin, col);

    // Liberar matriz
    for (int i = 0; i < lin; i++)
    {
        free(Mat_A[i]);
    }
    free(Mat_A);

    return 0;
}
