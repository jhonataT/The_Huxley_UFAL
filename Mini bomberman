#include <stdio.h>

   int main ()
   {
      int n, i, j, q , x, y, z; scanf("%d", &n);
      char matriz[n][n];
      for (i = 0; i < n; i++)
      {
         for (j = 0; j < n; j++)
         {
            scanf(" %c", &matriz[i][j]);
         }
      }
      scanf("%d", &q);
      for (z = 0; z < q; z++)
      {
         scanf("%d %d", &x, &y);
         i = x; j = y;
         if(matriz[x][y] == '_'){
            --i;//cima
            if(i < 0){
               i = n - 1;
               if(matriz[i][j] == '&') matriz[i][j] = '_';
            } //if(i < 0)
            else if(i >= 0) if(matriz[i][j] == '&') matriz[i][j] = '_';
            i = x;
            ++j; //direita;
            if(j >= n){
               j = 0;
               if(matriz[i][j] == '&') matriz[i][j] = '_';
            } //if(j >= n)
            else if(j <= n - 1) if(matriz[i][j] == '&') matriz[i][j] = '_';
            j = y;
            --j; // esquerda;
            if(j < 0){
               j = n - 1;
               if(matriz[i][j] == '&') matriz[i][j] = '_';
            } //if(j < 0)
            else if(j >= 0) if(matriz[i][j] == '&') matriz[i][j] = '_';
            j = y;
            ++i;   // baixo;
            if(i >= n){
               i = 0;
               if(matriz[i][j] == '&') matriz[i][j] = '_';
            }
            else if(i <= n - 1) if(matriz[i][j] == '&') matriz[i][j] = '_';
            i = x; j = y;
         }  // if(matriz[x][y] == '_')
      }
         for (i = 0; i < n; i++) // Imprime o mapa final.
         {
            for (j = 0; j < n; j++)
            {
               printf("%c", matriz[i][j]);
            }
            printf("\n");
         }
   }
