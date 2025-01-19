#include <stdio.h>

int main(void) {
  int n1, n2, n3, maior, menor;
  printf("Digite a idade da primeira pessoa: ");
  scanf("%i", &n1);
  printf("Digite a idade da segunda pessoa: ");
  scanf("%i", &n2);
  printf("Digite a idade da terceira pessoa: ");
  scanf("%i", &n3);
  maior = ((n1 >= n2) && (n1 >= n3)) ? n1: ((n2>=n1) && (n2 >= n3)) ? n2 : n3;
  menor = ((n1 <= n2) && (n1 <= n3)) ? n1 : ((n2 <= n1) && (n2 <= n3)) ? n2 : n3;
  if (maior == menor){
      printf("Todas as idades são iguais\n");
  }
  printf("A maior idade é %i\n", maior);
  printf("A menor idade é %i", menor);
  return 0;
}
