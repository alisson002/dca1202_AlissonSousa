#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void myPrint (int ***l, int n, int lin, int col) {//função para imprimir a matriz 3D
    int i, j, k;                                  //a impressão será feita de camada em camada
                                                 //imagine que o primeiro bloco impresso será a parte frontal da matriz
    for (k = 0; k < n; k++) {                   //Desta forma o segundo será a segunda camada
        printf("Bloco %d\n",k+1);                  //e assim por diante, sempre imaginando um atrás do outro(em profundidade: k)
        for (i = 0; i < lin; i++) {
            for (j = 0; j < col; j++) {
                printf("%d\t", l[i][j][k]);
            }
            printf("\n");
        }
    }
}

int main()
{
    int i, j, k, lin, col, n;
    int ***x,***y;

    lin=5;//linhas
    col=6;//colunas
    n=4;  //profundidade

    //aloca array
    x = (int***)malloc(lin*sizeof(int**));

    for (i = 0; i < lin; i++) {
        x[i] = (int**)malloc(col*sizeof(int**));
        for (j = 0; j < col; j++) {
            x[i][j] = (int*)malloc(n*sizeof(int*));
        }
    }
    srand(time(NULL));
    for (k = 0; k < n; k++) {
        for (i = 0; i < lin; i++) {
            for (j = 0; j < col; j++) {
                x[i][j][k] =rand()%1000+1;
            }
        }
    }

    myPrint(x,n,lin,col);
    printf("\n");

    x[0] = (int*)malloc(lin*col*n*sizeof(int));//aloca toda a matriz em um unico array

    printf("matriz x Em um unico array: \n");
    for(i=0; i<lin*col*n; i++){
        x[0][i] = rand()%1000+1;
        printf("%d\t",x[0][i]);
      }
    printf("\n");

    //aloca array auxiliar
    y = (int***)malloc(lin*sizeof(int**));

    for (i = 0; i < lin; i++) {
        y[i] = (int**)malloc(col*sizeof(int**));
        for (j = 0; j < col; j++) {
            y[i][j] = (int*)malloc(n*sizeof(int*));
        }
    }

    y[0] = (int*)malloc(lin*col*n*sizeof(int));

    memcpy(y[0], x[0], lin*col*n*sizeof(int));//detino,origem,tamanho;

    printf("matriz y Em um unico array: \n");
    for(i=0; i<lin*col*n; i++){
        printf("%d\t",y[0][i]);
      }
      //liberando memória de x e y
      free(y[0]);
      free(y);

      free(x[0]);
      free(x);
return 0;
}
