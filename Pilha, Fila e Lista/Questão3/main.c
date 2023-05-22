#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main()
{
    Lista* li = create(5);

    // Adiciona 5 elementos
    add(li, 1);
    add(li, 2);
    add(li, 3);
    add(li, 4);
    add(li, 5);

    printf("FUNCAO ADD:\n");
    printf("Numeros de elementos na lista: %i\n", size(li));

    //Analisa se o numero solicitado está na lista para ser removido.
    printf("\nFUNCAO REMOVER:\n");
    printf("Foi possivel remover o elemento da lista?: %s\n", remover(li, 2) ? "Sim" : "Nao");

    //Encontra a posição de um elemento na lista.
    printf("\nFUNCAO FIND:\n");
    int posicao = find(li, 4);
    if (posicao != -1) {
        printf("O numero %i foi encontrado na posicao: [%i]\n", 4, posicao);
    } else {
        printf("Numero nao encontrado na lista\n");
    }

    // Verifica se a lista está vazia.
    printf("\nA lista esta VAZIA? %s\n", isEmpty(li) ? "Sim" : "Nao");

    // Verifica se a lista está cheia.
    printf("A lista esta CHEIA? %s\n", isFull(li) ? "Sim" : "Nao");

    // Remove todos os elementos da lista.
    clear(li);
    printf("\nFUNCAO CLEAR\n");
    printf("A lista esta VAZIA? %s\n", isEmpty(li) ? "Sim" : "Nao");

    return 0;
}
