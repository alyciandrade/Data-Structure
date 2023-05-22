typedef struct lista Lista;

Lista* create(int n);

int add(Lista* li, int e);

int remover(Lista* li, int numero);

int size(Lista* li);

int find(Lista* li, int elemento);

int isFull(Lista* li);

int isEmpty(Lista* li);

void clear(Lista* li);
