#include <stdio.h>

int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco");
  for(i = 0 ; i <= 4 ; i++){
    printf("\ni = %d",i);
    printf("vet[%d] = %.1f",i, vet[i]);
    printf("*(f + %d) = %.1f",i, *(f+i));
    printf("&vet[%d] = %X",i, &vet[i]);
    printf("(f + %d) = %X",i, f+i);
  }
}

/*
Saida:

contador  /valor so conteudo nesta posicao   /valor do contedudo do ponteiro   /endereco do vetor na memoria   /endereco do ponteiro na memoria
i = 0      vet[0] = 1.1                      *(f + 0) = 1.1                    &vet[0] = 60FE94                (f + 0) = 60FE94
i = 1      vet[1] = 2.2                      *(f + 1) = 2.2                    &vet[1] = 60FE98                (f + 1) = 60FE98
i = 2      vet[2] = 3.3                      *(f + 2) = 3.3                    &vet[2] = 60FE9C                (f + 2) = 60FE9C
i = 3      vet[3] = 4.4                      *(f + 3) = 4.4                    &vet[3] = 60FEA0                (f + 3) = 60FEA0
i = 4      vet[4] = 5.5                      *(f + 4) = 5.5                    &vet[4] = 60FEA4                (f + 4) = 60FEA4

Sim,foram obitidas as respostas esperadas.
*/
