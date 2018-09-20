#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ordenar(int n, int *p);

int main()
{
   int cont, n;
   int *p;
   printf("Quantidade de valores: ");
   scanf("%d", &n);
   p=(int*)malloc(n*sizeof(int));
   srand(time(NULL));
   for(cont=0;cont<n;cont++){
       p[cont]=rand()%1000;
       printf("p[%d]=", cont);
       printf("%d\t", p[cont]);
   }
    //tentei fazer usando a função scanf para que os valores do vetor fossem da escolha do usuario, mas não consegui.
    //revisar dps.
   ordenar(n,p);
   printf("\nValores organizados:\n");
   for(cont=0;cont<n;cont++){
       printf("p[%d]=", cont);
       printf("%d\t", p[cont]);
       }
   free(p);
return 0;
}

int ordenar(int n, int *p){
    int i,j,aux;
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(p[j]>p[j+1]){
                aux=p[j];
                p[j]=p[j+1];
                p[j+1]=aux;
            }
        }
    }
}

