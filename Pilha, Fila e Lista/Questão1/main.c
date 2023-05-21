#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main()
{
    Pilha* pi = create(8);

    // Adiciona 4 elementos
    add(pi, 5);  // Primeiro número adicionado (BASE)
    add(pi, 10);
    add(pi, 15);
    add(pi, 20);
    add(pi, 25);
    add(pi, 30);
    add(pi, 35);
    add(pi, 40); // Último número adicionado (TOPO)

    printf("FUNCAO ADD:\n");
    printf("Numeros de elementos na pilha: %i\n", size(pi));

    // Remove o último elemento da pilha.
    pop(pi);

    printf("\nFUNCAO POP:\n");
    printf("Numeros de elementos na pilha depois da remocao do numero do topo: %i\n", size(pi));

    // Mostra o elemento do topo da pilha.
    printf("\nFUNCAO TOP:\n");
    if (!isEmpty(pi)) {
        printf("Elemento do topo da pilha: %i\n", top(pi));
    }

    // Mostra o elemento da base da pilha.
    printf("\nFUNCAO BOTTOM:\n");
    if (!isEmpty(pi)) {
        printf("Elemento da base da pilha: %i\n", bottom(pi));
    }

    // Encontra a posição de um elemento na pilha.
    printf("\nFUNCAO FIND:\n");
    int posicao = find(pi, 20);
    if (posicao != -1) {
        printf("O numero %i foi encontrado na posicao: [%i]\n", 20, posicao);
    } else {
        printf("Elemento nao encontrado\n");
    }

    // Verifica se a pilha está vazia.
    printf("\nA pilha esta VAZIA? %s\n", isEmpty(pi) ? "Sim" : "Nao");

    // Verifica se a pilha está cheia.
    printf("A pilha esta CHEIA? %s\n", isFull(pi) ? "Sim" : "Nao");

    // Remove todos os elementos da pilha.
    clear(pi);
    printf("\nFUNCAO CLEAR\n");
    printf("A pilha esta VAZIA? %s\n", isEmpty(pi) ? "Sim" : "Nao");

    return 0;
}
