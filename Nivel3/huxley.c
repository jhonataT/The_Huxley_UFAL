#include <stdio.h>

    void Imprime_array(int i, int j, int m1, int m2, int array[][m2])
    {
        if (i < m1)
        {
            if (j < m2)
            {
                printf("%d ", array[i][j]);
                Imprime_array(i, ++j, m1, m2, array);
            }
            else
            {
                printf("\n");
                Imprime_array(++i, 0, m1, m2, array);
            }
        }
    }

    void Inversa(int i, int j, int m1, int m2, int Dest, int cont, int array[][m2])
    {
        if (j < m2)
        {
            if (i < m1)
            {
                if (cont <= Dest)
                {
                    if (array[i][j] != 0)
                    {
                        array[i][j] = 0;
                        ++cont;
                    }
                    Inversa(++i, j, m1, m2, Dest, cont, array);
                }
                else Imprime_array(0, 0, m1, m2, array);
            }
            else Inversa(0, ++j, m1, m2, Dest, cont, array);
        }
        else Imprime_array(0, 0, m1, m2, array);
    }

    void Normal(int i, int j, int m1, int m2, int Dest, int cont, int array[][m2])
    {
        if (i < m1)
        {
            if (j < m2)
            {
                if (cont <= Dest)
                {
                    if (array[i][j] != 0)
                    {
                        array[i][j] = 0;
                        ++cont;
                    }
                    Normal(i, ++j, m1, m2, Dest, cont, array);
                }
                else Imprime_array(0, 0, m1, m2, array);
            }
            else Normal(++i, 0, m1, m2, Dest, cont, array);
        }
        else Imprime_array(0, 0, m1, m2, array);
    }

    void Input(int i, int j, int m1, int m2, int array[][m2])
    {
        if (i < m1)
        {
            if (j < m2)
            {
                scanf("%d", &array[i][j]);
                Input(i, ++j, m1, m2, array);
            }
            else Input(++i, 0, m1, m2, array);
        }
        else 
        {
            int Dest, res;
            scanf("%d", &Dest);
            res = Dest % 2;
            if (res == 0)
            {
                Normal(0, 0, m1, m2, Dest, 1, array);
            }
            else Inversa(0, 0, m1, m2, Dest, 1, array);
        }
    }

    int main ()
    {
        int m1, m2;
        scanf("%d%d", &m1, &m2);
        int array[m1][m2];
        Input(0, 0, m1, m2, array);

        return 0;
    }