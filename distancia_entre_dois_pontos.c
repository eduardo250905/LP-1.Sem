#include <stdio.h>
#include <math.h>

int main(void) {
  float x1, x2, y1, y2, dist;
  printf("Calculador de distância entre dois pontos\n");
  printf("Digite o x1: ");
  scanf("%f", &x1);
  printf("Digite o x2: ");
  scanf("%f", &x2);
  printf("Digite o y1:");
  scanf("%f", &y1);
  printf("Digite o y2: ");
  scanf("%f", &y2);
  dist = sqrt(pow(x1-x2, 2)+pow(y1-y2, 2));
  printf("A distância entre os pontos é igual a %.2f", dist); 
  return 0;
}
