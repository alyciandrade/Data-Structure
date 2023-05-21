#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main()
{
    Pilha* pi = create(8);

    //Adiciona 4 elementos
    add(&pi, 5);
    add(&pi, 10);
    add(&pi, 15);
    add(&pi, 20);
    add(&pi, 25);
    add(&pi, 30);
    add(&pi, 35);

    printf("FUNCAO ADD:\n");
    printf("Numeros de elementos na fila: %d\n", size(&pi));

    //Remove primeiro elemento da fila.
    pop(&pi);

    printf("\nFUNCAO POP:\n");
    printf("Numeros de elementos na fila: %d\n", size(&pi));

    //Mostra o ultimo elemento da fila.
    top(&pi);

    printf("\nFUNCAO TOP:\n");
    printf("Ultimo numero da fila: %d\n", top(&pi));

    //Mostra o primeiro elemento da fila.
    bottom(&pi);

    printf("\nFUNCAO BOTTOM:\n");
    printf("Primeiro numero da fila: %d\n", bottom(&pi));

    //Mostra se a fila está vazia.
    isEmpty(&pi);

    printf("\nA fila esta VAZIA? \n- %s\n", isEmpty(&pi) ? "verdadeiro" : "falso");

    //Mostra se a fila está cheia.
    isFull(&pi);

    printf("\nA fila esta CHEIA? \n- %s\n", isFull(&pi) ? "verdadeiro" : "falso");

    //Remove todos os elementos da fila.
    printf("\nFUNCAO CLEAR");
    clear(&pi);
    printf("\nA fila esta VAZIA? \n- %s\n", isEmpty(&pi) ? "verdadeiro" : "falso");

}
