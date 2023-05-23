//QUESTÃO 5
void troca (int *x, int *y)
{
    int Troca;
    Troca = *x;
    *x = *y;
    *y = Troca;
}
void main(void)
{
    int a = 2, b = 5;
    troca(&a, &b);

    printf("%i %i", a, b);
}
