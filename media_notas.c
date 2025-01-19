#include <stdio.h>

int main(void) {
  int quant, q;
  float media, nota, soma=0;
  printf("Quantas notas? ");
  scanf("%d", &quant);
  q = quant;
  while(q >= 1){
    printf("Digite a nota: ");
    scanf("%f", &nota);
    soma += nota;
    q --;
  }
  media = soma/quant;
  printf("A média é de %.2f", media);
  return 0;
}
