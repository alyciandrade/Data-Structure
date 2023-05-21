#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "fila.h"

struct fila
{
    int limite;
    int contador;
    int* dados;
};

Fila* create(int n)
{
    Fila* fi = (Fila*) malloc(sizeof(Fila));

    if(fi == NULL)
    {
        return NULL;
    }else{
        fi->dados = (int*) malloc(n * sizeof(int));
        fi->limite = n;
        fi->contador = 0;
        return fi;
    }
}

int add(Fila* fi, int elemento)
{
   if(fi != NULL && fi->contador < fi->limite)
   {
       int posicaoDaInsercao = fi->contador;
       fi->dados[posicaoDaInsercao] = elemento;
       fi->contador++;
       return 1;
   }
   else
    return 0;
}

int pop(Fila* fi)
{
    if(fi != NULL && !isEmpty(fi))
    {
        int i = 0;
        int x = 0;

        int * novoVetor = (int*) malloc(fi->limite * sizeof(int));

        for(i = 1; i < fi->contador; i++){
            novoVetor[x] = fi->dados[i];

            x++;
        }
        fi->contador--;
        free(fi->dados);
        fi->dados = novoVetor;

        return 1;
    }
    else return 0;
}

int last(Fila* fi)
{
    if(fi != NULL && !isEmpty(fi))
    {
        int ultimoInserido = fi->contador - 1;

        return fi->dados[ultimoInserido];
    }else
    return -1;
}

int first(Fila* fi)
{
    if(fi != NULL && !isEmpty(fi))
    {
        return fi->dados[0];
    }else
    return -1;
}

bool isEmpty(Fila* fi)
{
    if(fi->contador <= 0)
    {
        return true;
    }else
    return false;
}

bool isFull(Fila* fi)
{
    if(size >= fi->limite)
    {
        return true;
    }else
    return false;
}

void printAll(Fila* fi)
{
    int i = 0;

    for(i = 0; i < fi->contador; i++)
    {
        printf("posicao[%i] = %i\n", i, fi->dados[i]);
    }
}

void clear(Fila* fi)
{
    fi->limite = 0;
    fi->contador = 0;
    fi->dados = -1;
}

int size(Fila* fi)
{
    return fi->contador;
}

