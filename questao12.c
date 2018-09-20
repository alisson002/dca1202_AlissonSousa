#include <stdio.h>

int main()
{
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

    aloha[2] = value;       //válida
    scanf("%f", &aloha);    //válida
    aloha = value";         //inválida
    printf("%f", aloha);    //válida
    coisas[4][4] = aloha[3];//válida
    coisas[5] = aloha;      //inválida
    pf = value;             //inválida
    pf = aloha;             //válida
}
