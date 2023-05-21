#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main()
{
    Fila* fi = create(6);

    //Adiciona 4 elementos
    add(&fi, 12);
    add(&fi, 45);
    add(&fi, 6);
    add(&fi, 23);
    add(&fi, 7);
    add(&fi, 15);

    printf("FUNCAO ADD:\n");
    printf("Numeros de elementos na fila: %d\n", size(&fi));

    //Remove primeiro elemento da fila.
    pop(&fi);

    printf("\nFUNCAO POP:\n");
    printf("Numeros de elementos na fila: %d\n", size(&fi));

    //Mostra o ultimo elemento da fila.
    last(&fi);

    printf("\nFUNCAO LAST:\n");
    printf("Ultimo numero da fila: %d\n", last(&fi));

    //Mostra o primeiro elemento da fila.
    first(&fi);

    printf("\nFUNCAO FIRST:\n");
    printf("Primeiro numero da fila: %d\n", first(&fi));

    //Mostra se a fila está vazia.
    isEmpty(&fi);

    printf("\nA fila esta VAZIA? \n- %s\n", isEmpty(&fi) ? "verdadeiro" : "falso");

    //Mostra se a fila está cheia.
    isFull(&fi);

    printf("\nA fila esta CHEIA? \n- %s\n", isFull(&fi) ? "verdadeiro" : "falso");

    //Mostra todos os números que estão na fila.
    printf("\nNUMEROS:\n");
    printAll(&fi);

    //Remove todos os elementos da fila.
    printf("\nFUNCAO CLEAR");
    clear(&fi);
    printf("\nA fila esta VAZIA? \n- %s\n", isEmpty(&fi) ? "verdadeiro" : "falso");

}
