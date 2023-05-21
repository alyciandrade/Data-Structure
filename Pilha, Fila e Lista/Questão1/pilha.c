#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct pilha
{
    int limite;
    int contador;
    int* dados;
};

Pilha* create(int n)
{
    Pilha* pi = (Pilha*) malloc(sizeof(Pilha));

    if(pi == NULL)
    {
        return NULL;
    }else{
        pi->dados = (int*) malloc(n * sizeof(int));
        pi->limite = n;
        pi->contador = 0;
        return pi;
    }
}

int add(Pilha* pi, int e)
{
   if(pi != NULL && pi->contador < pi->limite)
   {
       int posicaoDaInsercao = fi->contador;
       fi->dados[posicaoDaInsercao] = e;
       fi->contador++;
       return 1;
   }
   else
    return 0;
}

int pop(Pilha* pi)
{
    if(pi != NULL && !isEmpty(pi))
    {
        int i = 0;
        int x = 0;

        int * novoVetor = (int*) malloc(fi->limite * sizeof(int));

        for(i = 1; i < fi->contador; i++){
            novoVetor[x] = fi->dados[i];

            x++;
        }
        pi->contador--;
        free(pi->dados);
        pi->dados = novoVetor;

        return 1;
    }
    else return 0;
}

int size(Pilha* pi)
{
    return pi->contador;
}

int top(Pilha* pi)
{
    if(pi != NULL && !isEmpty(pi))
    {
        int ultimoInserido = pi->contador - 1;

        return pi->dados[ultimoInserido];
    }else
    return -1;
}

int bottom(Pilha* pi)
{
    if(pi != NULL && !isEmpty(pi))
    {
        return pi->dados[0];
    }else
    return -1;
}

int find(Pilha* pi, int elemento)
{
    for (int i = 0; i <= pi->limite; i++) {
        if (pi->dados[i] == elemento) {
            return i;
        }
    }
    return -1;
}

int isFull(Pilha* pi)
{
    if(size >= pi->limite)
    {
        return 1;
    }else
    return 0;
}

int isEmpty(Pilha* pi)
{
    if(pi->contador <= 0)
    {
        return 1;
    }else
    return 0;
}

void clear(Pilha* pi)
{
    pi->limite = 0;
    pi->contador = 0;
    pi->dados = -1;
}
