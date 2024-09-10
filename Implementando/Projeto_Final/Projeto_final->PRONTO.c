#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUTOS 1000
#define MAX_NOME 101

typedef struct
{
    char nome[MAX_NOME];
    int quantidade;
    double preco;
} Produto;

typedef struct
{
    Produto produtos[MAX_PRODUTOS];
    int total_produtos;
    double orcamento;
    double total_gasto;
} Carrinho;

void inicializa_carrinho(Carrinho *carrinho, double orcamento)
{
    carrinho->total_produtos = 0;
    carrinho->orcamento = orcamento;
    carrinho->total_gasto = 0;
}

int encontra_produto(Carrinho *carrinho, char *nome)
{
    for (int i = 0; i < carrinho->total_produtos; i++)
    {
        if (strcmp(carrinho->produtos[i].nome, nome) == 0)
        {
            return i;
        }
    }
    return -1;
}

void compra_produto(Carrinho *carrinho, char *nome, int quantidade, double preco)
{
    int index = encontra_produto(carrinho, nome);

    double custo = quantidade * preco;
    if (carrinho->total_gasto + custo > carrinho->orcamento)
    {
        quantidade = (int)((carrinho->orcamento - carrinho->total_gasto) / preco);
        custo = quantidade * preco;
    }

    if (quantidade > 0)
    {
        if (index == -1)
        {
            strcpy(carrinho->produtos[carrinho->total_produtos].nome, nome);
            carrinho->produtos[carrinho->total_produtos].quantidade = quantidade;
            carrinho->produtos[carrinho->total_produtos].preco = preco;
            carrinho->total_produtos++;
        }
        else
        {
            carrinho->produtos[index].quantidade += quantidade;
        }
        carrinho->total_gasto += custo;
    }
}

void remove_produto(Carrinho *carrinho, char *nome, int quantidade)
{
    int index = encontra_produto(carrinho, nome);
    if (index == -1)
    {
        printf("ERRO: O produto %s nao esta no carrinho\n", nome);
        return;
    }

    if (quantidade > carrinho->produtos[index].quantidade)
    {
        quantidade = carrinho->produtos[index].quantidade;
    }

    carrinho->produtos[index].quantidade -= quantidade;
    carrinho->total_gasto -= quantidade * carrinho->produtos[index].preco;

    if (carrinho->produtos[index].quantidade == 0)
    {
        for (int i = index; i < carrinho->total_produtos - 1; i++)
        {
            carrinho->produtos[i] = carrinho->produtos[i + 1];
        }
        carrinho->total_produtos--;
    }
}

void atualiza_preco(Carrinho *carrinho, char *nome, double preco)
{
    int index = encontra_produto(carrinho, nome);
    if (index == -1)
    {
        printf("ERRO: O produto %s nao esta no carrinho\n", nome);
        return;
    }

    double custo_atual = carrinho->produtos[index].quantidade * carrinho->produtos[index].preco;
    double novo_custo_unitario = preco;
    double novo_custo_total = carrinho->produtos[index].quantidade * novo_custo_unitario;

    if (novo_custo_unitario == 0.0)
    {
        for (int i = index; i < carrinho->total_produtos - 1; i++)
        {
            carrinho->produtos[i] = carrinho->produtos[i + 1];
        }
        carrinho->total_produtos--;
        carrinho->total_gasto -= custo_atual;
        return;
    }
    if (carrinho->total_gasto - custo_atual + novo_custo_total > carrinho->orcamento)
    {
        double orcamento_restante = carrinho->orcamento - (carrinho->total_gasto - custo_atual);
        int nova_quantidade = (int)(orcamento_restante / novo_custo_unitario);

        if (nova_quantidade == 0)
        {
            for (int i = index; i < carrinho->total_produtos - 1; i++)
            {
                carrinho->produtos[i] = carrinho->produtos[i + 1];
            }
            carrinho->total_produtos--;
            carrinho->total_gasto -= custo_atual;
        }
        else
        {
            carrinho->produtos[index].quantidade = nova_quantidade;
            carrinho->produtos[index].preco = novo_custo_unitario;
            carrinho->total_gasto = carrinho->total_gasto - custo_atual + (nova_quantidade * novo_custo_unitario);
        }
    }
    else
    {
        carrinho->total_gasto = carrinho->total_gasto - custo_atual + novo_custo_total;
        carrinho->produtos[index].preco = preco;
    }
}

int compara_produto(const void *a, const void *b)
{
    return strcmp(((Produto *)a)->nome, ((Produto *)b)->nome);
}

void mostra_carrinho(Carrinho *carrinho)
{
    qsort(carrinho->produtos, carrinho->total_produtos, sizeof(Produto), compara_produto);
    for (int i = 0; i < carrinho->total_produtos; i++)
    {
        Produto p = carrinho->produtos[i];
        double valor_total = p.quantidade * p.preco;
        printf("%s %d x %.2f = %.2f\n", p.nome, p.quantidade, p.preco, valor_total);
    }
    printf("TOTAL: %.2f\n", carrinho->total_gasto);
}

int main()
{
    int Q;
    double M;
    scanf("%d %lf", &Q, &M);

    Carrinho carrinho;
    inicializa_carrinho(&carrinho, M);

    for (int i = 0; i < Q; i++)
    {
        char operacao;
        char nome[MAX_NOME];
        int quantidade;
        double preco;

        scanf(" %c", &operacao);

        if (operacao == 'C')
        {
            scanf("%s %lf %d", nome, &preco, &quantidade);
            compra_produto(&carrinho, nome, quantidade, preco);
        }
        else if (operacao == 'R')
        {
            scanf("%s %d", nome, &quantidade);
            remove_produto(&carrinho, nome, quantidade);
        }
        else if (operacao == 'A')
        {
            scanf("%s %lf", nome, &preco);
            atualiza_preco(&carrinho, nome, preco);
        }
        else if (operacao == 'M')
            mostra_carrinho(&carrinho);
        else
            printf("ERRO: Nao foi possível realizar essa operacao\n");
    }

    return 0;
}
