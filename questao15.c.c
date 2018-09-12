#include <stdio.h>//para scanf e printf
#include <stdlib.h>//para malloc, rand, free e qsort
#include <time.h>//para time

int compareMyType(const void *a, const void *b);//declaração da função para comparar

int main()
{
   int cont, n;//contador e tamanho do vetor
   int *p;
   printf("Quantidade de valores: ");
   scanf("%d", &n);//armazenando a quantidade de valores em "n"
   p=(int*)malloc(n*sizeof(int));//alocação de memória para um vetor de inteiros
   srand(time(NULL));//vai fazer com que a função rand()% gere sempre numeros aleatorios diferentes
   for(cont=0;cont<n;cont++){//for para armazenar e exibir os elementos do vetor
       p[cont]=rand()%1000;//vetor p recebendo valores aleatorios
       printf("p[%d]=", cont);//imprime "p[cont]="
       printf("%d\t", p[cont]);//exibe o valor do vetor p na posição cont
   }
    //tentei fazer usando a função scanf para que os valores do vetor fossem da escolha do usuario, mas não consegui.
    //revisar dps.
   qsort(p,n,sizeof(float),compareMyType);//vetor que queremos organizar,numeros de elmentos no vetor,tamanho em bytes de cada elemento da matriz,função de comparação
   printf("\nValores organizados:\n");// exibe "Valores organizados:" na tela
   for(cont=0;cont<n;cont++){//for para exirbir os valores organizados na tela
       printf("p[%d]=", cont);//imprime "p[cont]="
       printf("%d\t", p[cont]);//exibe o valor do vetor p na posição cont
       }
   free(p);//liberação de memória
return 0;
}

int compareMyType(const void *a, const void *b)
{
  return ( *(int*)a - *(int*)b);//o elemento de "a" tem que vir antes de "b" portanto a diferença tem que serr negativa
  //return <0 o elemento de "a" vem antes de "b"
  //return 0 o elemento de "a" é equivalente a "b"
  //return >0o elemento de "a" vem depois de "b"
}

//todas as informações referentes as funções qsort e compareMyType foram tiradas do site c plu plus: http://www.cplusplus.com/reference/cstdlib/qsort/?kw=qsort

