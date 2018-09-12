#include <stdio.h>

int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%d ",*(vet+i));
  }
    for(i=0;i<3;i++){
      printf("%X ",vet+i);
    }
}
//O primeiro programa imprime na tela o conteuo do vetor vet (saida: 4 9 13);
//O segundo programa imprime os endereços na memória de cada elemento do vetor vet (saida: 60FEA0 60FEA4 60FEA8);
