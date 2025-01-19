#include <stdio.h>
#define Max 3

int main(void) {
  float div;
  int i, q=1, esc, soma, sub, mul;
  int numeros1[Max], numeros2[Max];
  
  while(q<= 2){
    for(i=0; i<Max; i++){
      printf("Escolha o %d° Valor da %d° lista: ", i+1, q);
      if(q==1){
        scanf("%d", &numeros1[i]);
      }
      else if (q==2){
        scanf("%d", &numeros2[i]);
      }
    }
    q++;
  }
  
  printf("Qual operação você deseja realizar?\n1: Soma\n2: Subtração\n3: Multiplicação\n4: Divisão\n");
  scanf("%d", &esc);
  
  switch(esc){
    case 1: 
      for(i=0; i<Max; i++){
        soma = numeros1[i] + numeros2[i]; 
        printf("%d + %d = %d\n", numeros1[i], numeros2[i], soma);
      }
      break;
    case 2: 
      for(i=0; i<Max; i++){
        sub = numeros1[i] - numeros2[i];
        printf("%d - %d = %d\n", numeros1[i], numeros2[i], sub);
      }
      break;
    case 3:
      for(i=0; i<Max; i++){
        mul = numeros1[i]*numeros2[i];
        printf("%d * %d = %d\n", numeros1[i], numeros2[i], mul);
      }
      break;
    case 4:
      for(i=0; i<Max; i++){
        div = (float)numeros1[i]/(float)numeros2[i];
        printf("%d / %d = %.2f\n", numeros1[i], numeros2[i], div);
      }
      break;
    default:
      printf("ERRO! Valor não aceito");
      break;    
  }
  return 0;
}
