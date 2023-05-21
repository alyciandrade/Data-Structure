#include <stdbool.h>

typedef struct fila Fila;

Fila* create(int n);

int add(Fila* fi, int e);

int pop(Fila* fi);

int first(Fila* fi);

int last(Fila* fi);

bool isEmpty(Fila* fi);

bool isFull(Fila* fi);

void printAll(Fila* fi);

void clear(Fila* fi);

int size (Fila* fi);
