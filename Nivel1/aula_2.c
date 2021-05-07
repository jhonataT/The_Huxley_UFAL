#include <stdio.h>
#include <math.h>
  
    int somar_1 (int n1)
    {
        printf("somar_1\n");
        return n1 + 1;
    }
    int main ()
    {
        int res1, res2;
        res1 = somar_1(10);
        res2 = somar_1(20);
        printf(" %d / %d\n", res1, res2); 
        return 0;
    }
