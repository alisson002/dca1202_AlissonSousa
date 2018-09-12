#include <stdio.h>

int main()
{
  char charx[4];
  int intx[4];
  float floatx[4];
  double doublex[4];
  printf("Declarado como char: %d, %d, %d, %d \n", charx, charx+1, charx+2, charx+3);
  printf("Declarado como inteiro: %d, %d, %d, %d \n", intx, intx+1, intx+2, intx+3);
  printf("Declarado como float: %d, %d, %d, %d \n", floatx, floatx+1, floatx+2, floatx+3);
  printf("Declarado como double: %d, %d, %d, %d \n\n", doublex, doublex+1, doublex+2, doublex+3);
  //Nesse caso usando o %p;
  printf("Declarado como char: %p, %p, %p, %p \n", charx, charx+1, charx+2, charx+3);
  printf("Declarado como inteiro: %p, %p, %p, %p \n", intx, intx+1, intx+2, intx+3);
  printf("Declarado como float: %p, %p, %p, %p \n", floatx, floatx+1, floatx+2, floatx+3);
  printf("Declarado como double: %p, %p, %p, %p \n\n", doublex, doublex+1, doublex+2, doublex+3);
}
