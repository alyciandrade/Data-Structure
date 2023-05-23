//QUESTÃO 6
void troca (char *x, char *y)
{
    char Troca;
    Troca = *x;
    *x = *y;
    *y = Troca;
}
void main (void)
{
    char a = 'A', b = 'B';
    troca(&a, &b);

    printf("%c %c", a, b);
}
