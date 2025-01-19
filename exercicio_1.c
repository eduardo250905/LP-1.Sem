#include <stdio.h>

int main(void){
  int n1, n2, soma, sub, mul;
  float div, vm;
  printf("Valor 1: ");
  scanf("%i", &n1);
  printf("Valor 2: ");
  scanf("%i", &n2);
  soma = n1 + n2;
  sub = n1 - n2;
  div = (float)n1 / (float)n2;
  mul = n1 * n2;
  vm = (float)n2 / (float)n1;
  printf("A soma dos valores é igual a %i\n", soma);
  printf("A subtração dos valores é igual a %i\n", sub);
  printf("A divisão dos valores é igual a %.2f\n", div);
  printf("A multiplicação dos valores é igual a %i\n", mul);
  printf("A velocidade média com n1 = tempo e n2 = espaço é %.2f\n", vm);
  printf("A área do retângulo formado por lados n1 e n2 é %i", mul);
  return 0;
}
