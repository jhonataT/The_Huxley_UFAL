#include <stdio.h>

    int somar(int n1, int n2)
    {
        return n1 + n2;
    }
    int multiplicar(int n1, int n2)
    {
        return n1 * n2;
    }
    int subtrair(int n1, int n2)
    {
        return n1 - n2;
    }
    int dividir(int n1, int n2)
    {
        return n1/n2;
    }

    int main ()
    {
        printf("Soma: %d\n", somar(5, 2));
        printf("Multiplicação: %d\n", multiplicar(5, 2));
        printf("Subtração: %d\n", subtrair(5, 2));
        printf("Divisão: %d\n", dividir(5, 2));
        return 0;

    }