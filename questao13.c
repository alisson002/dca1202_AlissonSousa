#include <stdio.h>

int divisao(int a, int b){
    return a/b;
}

int main()
{
//Um ponteiro para função é um artificio utilizado para acessar o endereço de uma função, desta forma é possivel acessar uma função através de um ponteiro;
    int (*ponteiro)(int,int);
    ponteiro=divisao;
    printf("Divisao = %d\n",ponteiro(6,2));
}
