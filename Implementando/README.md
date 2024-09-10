# 🎉 Bem-vindo à Pasta de Implementações! 🎉

Esta pasta é dedicada a implementar projetos e conceitos aprendidos ao longo dos estudos. Aqui você encontrará diversas implementações, desde estruturas de dados básicas em Python até algoritmos avançados em C. 🚀

---


## 🛒 Sistema de Mercado Virtual

O **Sistema de Mercado Virtual** é uma ferramenta inovadora projetada para gerenciar suas compras em um supermercado virtual de forma eficiente e prática. Com este sistema, você pode adicionar e remover produtos do seu carrinho, além de ajustar suas compras com base no orçamento disponível.

### 🌐 Web Scraping: Mantendo a Atualização dos Preços

Para garantir que os preços e nomes dos produtos estejam sempre atualizados e reflitam a realidade do mercado, o **Sistema de Mercado Virtual** utiliza **web scraping**. 

**Web scraping** é uma técnica de coleta automatizada de dados de websites. No **Timelint**, isso significa que:

- **Obtemos Dados Atualizados**: O sistema extrai informações em tempo real de sites como o Mercado Livre.
- **Mantemos a Precisão**: Asseguramos que os preços e nomes dos produtos exibidos sejam precisos e correspondam às informações reais do mercado.

Com o uso de web scraping, o **Sistema de Mercado Virtual** garante que você sempre tenha acesso a informações precisas e relevantes, melhorando a sua experiência de compra e ajudando a tomar decisões informadas.

Experimente o **Sistema de Mercado Virtual** e descubra uma nova forma de gerenciar suas compras de maneira mais organizada e eficiente! 🚀

[Clique aqui pra ter acesso ao sistema](https://github.com/GabD-S/Desafios-C99/tree/main/Implementando/Projeto_Final)

---

## 📚 Dicionário sem bibliotecas 🛠️

### 📝 O que é um Dicionário?

Um dicionário em Python é uma estrutura de dados que armazena pares chave-valor. Isso permite o armazenamento e a recuperação rápida de dados com base em uma chave única. Em c não temos função nativa pra isso, mas pode ser feito na mão assim.

### 💻 Implementação

```c

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


```

---

## 📚 Lista sem bibliotecas 🛠️

### 📝 O que é uma Lista?

Uma lista em Python é uma estrutura de dados que armazena uma coleção de itens em uma sequência ordenada. Ela permite a adição, remoção e acesso aos itens com base em seu índice.

### 💻 Implementação
```c

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prox;
};

typedef struct node Lista;

Lista ** cria_lista(){
    Lista **l = NULL;

    l = (Lista **) malloc (sizeof(Lista *));

    *l = NULL;

    return l;

}

void append(Lista **lista,int elem){

    Lista *nodo = (Lista *) malloc(sizeof(Lista));
    nodo->data = elem;
    nodo->prox = NULL;

    if(*lista == NULL){
        *lista = nodo;
    }else{

        Lista *nodo = (Lista *) malloc(sizeof(Lista));
        nodo->data = elem;
        nodo->prox = NULL;

        Lista *aux;
        aux = *lista;
        while(aux->prox != NULL){
            aux = aux->prox;
        }
        aux->prox = nodo;
    }
}

void pop_front(Lista **lista){

    Lista *aux;

    if(*lista == NULL)
        return ;
    else if((*lista)->prox == NULL){
        aux = *lista;
        *lista = NULL;
        free(aux);
    } else {
        aux = *lista;
        *lista = (*lista)->prox;
        free(aux);
    }
}

void imprime(Lista **l){
    Lista *aux;

    aux = *l;

    while(aux!=NULL){
        printf("%d => ",aux->data);
        aux=aux->prox;
    }
    printf("\n");
}

int main(){

    int elem;
    Lista **l;

    l = cria_lista();

    scanf("%d",&elem);

    append(l, elem);

    scanf("%d",&elem);

    append(l, elem);

    scanf("%d",&elem);

    append(l, elem);

    imprime(l);

    pop_front(l);

    imprime(l);

    free(l);

    return 0;
}


```

---

## 📚 Fração

### 📝 O que é uma Fração?

Uma fração é uma forma de representar uma parte de um todo, usando um numerador e um denominador. Por exemplo, 3/4 representa três partes de um total de quatro partes.

### 💻 Implementação

```c
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


```

---

## 📚 Escalonador de Matrizes em C

### 📝 O que é o Método de Gauss?

O Método de Gauss, ou eliminação gaussiana, é um algoritmo fundamental para resolver sistemas de equações lineares. O objetivo é transformar uma matriz em uma forma triangular superior, facilitando a resolução do sistema de equações por substituição retroativa.

### 📊 Passos do Método de Gauss

1. **Transformação em Matriz Triangular Superior**

   Comece com a matriz aumentada do sistema de equações. O objetivo é transformar essa matriz em uma matriz triangular superior, onde todos os elementos abaixo da diagonal principal são zero.

2. **Eliminação**

   Para cada linha, use operações elementares (trocas de linhas, multiplicações de linha, e adições de linha) para criar zeros abaixo da diagonal principal.

3. **Substituição Retroativa**

   Após obter a matriz triangular superior, resolva o sistema a partir da última equação e substitua de volta nas equações anteriores.

### 💻 Implementação

```c
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
```
#### Codigo para gerar valores aleatorios de tamanho n por n e executar o programa automaticamente

```Python

import numpy as np
import subprocess

print("Digite o tamanho da matriz:")
tamanho = int(input())

with open("txt.txt", "w") as file:
    # Escrevendo o tamanho pra nao bugar o codigo
    file.write(f"{tamanho}\n")
    file.write(f"{tamanho}\n")
    # ------------------------
    for i in range(1, tamanho):
        for j in range(1, tamanho):
            valor = j * (np.random.random()*1000)
            file.write(f"{valor:.5f} ")
            file.write("\n")


print(
    f"Matriz de {tamanho} linhas e {tamanho} colunas gerado com sucesso só rodar o programa\n")

print(
    "Você quer que eu execute o programa automaticamente? Escreva [Y] pra sim ou [N] pra não")
sim_nao = input().lower()

if sim_nao == 'y':
    comando = "clang escalonando_gaus.c -o olamundo && ./olamundo < txt.txt"
    try:
        subprocess.run(comando, shell=True, check=True)
        print("O programa foi executado com sucesso.")
    except subprocess.CalledProcessError as e:
        print(f"Ocorreu um erro ao executar o programa: {e}")
else:
    print("O programa Python foi executado com sucesso, faça bom uso do programa de matriz")



```



#### Desenho do Método de Gauss

1. **Matriz Original:**

| a11 a12 a13 | b1 |

| a21 a22 a23 | b2 |

| a31 a32 a33 | b3 |

2. **Matriz após Eliminação Gaussiana:**

| 1   a12'  a13'  | b1' |

| 0   1     a23'  | b2' |

| 0   0     1     | b3' |



Aqui, `a12'`, `a13'`, `a23'`, `b1'`, `b2'` e `b3'` são os novos valores após as operações de eliminação.

3. **Resolução do Sistema:**

   Use a matriz triangular superior para resolver as variáveis a partir da última linha para a primeira.

![Exemplo de Matriz Escalonada](Desafios-C99/Imagnes/mat.png)

---

Espero que você ache estes projetos úteis e instrutivos! Sinta-se à vontade para explorar, modificar e aprimorar cada um dos códigos. 🛠️💡

Se você tiver alguma dúvida ou sugestão, não hesite em entrar em contato. 📧

---




