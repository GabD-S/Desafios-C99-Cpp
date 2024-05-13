#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prox;
};

typedef struct node Lista;

Lista **cria_lista()
{
    Lista **l = NULL;

    l = (Lista **)malloc(sizeof(Lista *));

    *l = NULL;

    return l;
}

void append(Lista **lista, int elem)
{

    Lista *nodo = (Lista *)malloc(sizeof(Lista));
    nodo->data = elem;
    nodo->prox = NULL;

    if (*lista == NULL)
    {
        *lista = nodo;
    }
    else
    {

        Lista *nodo = (Lista *)malloc(sizeof(Lista));
        nodo->data = elem;
        nodo->prox = NULL;

        Lista *aux;
        aux = *lista;
        while (aux->prox != NULL)
        {
            aux = aux->prox;
        }
        aux->prox = nodo;
    }
}

void pop_front(Lista **lista)
{

    Lista *aux;

    if (*lista == NULL)
        return;
    else if ((*lista)->prox == NULL)
    {
        aux = *lista;
        *lista = NULL;
        free(aux);
    }
    else
    {
        aux = *lista;
        *lista = (*lista)->prox;
        free(aux);
    }
}

void imprime(Lista **l)
{
    Lista *aux;

    aux = *l;

    while (aux != NULL)
    {
        printf("%d => ", aux->data);
        aux = aux->prox;
    }
    printf("\n");
}

int main()
{

    int elem;
    Lista **l;

    l = cria_lista();

    scanf("%d", &elem);

    append(l, elem);

    scanf("%d", &elem);

    append(l, elem);

    scanf("%d", &elem);

    append(l, elem);

    imprime(l);

    pop_front(l);

    imprime(l);

    free(l);

    return 0;
}
