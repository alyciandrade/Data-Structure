#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct lista
{
    int limite;
    int contador;
    int* dados;
};

Lista* create(int n)
{
    Lista* li = (Lista*) malloc(sizeof(Lista));

    if(li == NULL)
    {
        return NULL;
    }else{
        li->dados = (int*) malloc(n * sizeof(int));
        li->limite = n;
        li->contador = 0;
        return li;
    }
}

int add(Lista* li, int e)
{
   if(li != NULL && li->contador < li->limite)
   {
       int posicaoDaInsercao = li->contador;
       li->dados[posicaoDaInsercao] = e;
       li->contador++;
       return 1;
   }
   else
    return 0;
}

int remover(Lista* li, int numero)
{
    if(li != NULL && !isEmpty(li))
    {
        int i, j;
        int numeroEncontrado = 0;

        // Procurar o elemento a ser removido
        for(i = 0; i < li->contador; i++)
        {
            if(li->dados[i] == numero)
            {
                numeroEncontrado = 1;
                break;
            }
        }

        if(numeroEncontrado)
        {
            // Remanejar os elementos após a posição de remoção
            for(j = i; j < li->contador - 1; j++)
            {
                li->dados[j] = li->dados[j+1];
            }

            li->contador--;

            int* novoVetor = (int*) malloc(li->contador * sizeof(int));
            for(i = 0; i < li->contador; i++)
            {
                novoVetor[i] = li->dados[i];
            }

            free(li->dados);
            li->dados = novoVetor;

            return 1;
        }
    }

    return 0;
}


int size(Lista* li)
{
    return li->contador;
}

int find(Lista* li, int elemento)
{
    for (int i = 0; i <= li->limite; i++) {
        if (li->dados[i] == elemento) {
            return i;
        }
    }
    return -1;
}

int isFull(Lista* li)
{
    if(size(li) == li->limite)
    {
        return 1;
    }else
    return 0;
}

int isEmpty(Lista* li)
{
    if(li->contador <= 0)
    {
        return 1;
    }else
    return 0;
}

void clear(Lista* li)
{
    free(li->dados);
    li->dados = NULL;
    li->limite = 0;
    li->contador = 0;
}

