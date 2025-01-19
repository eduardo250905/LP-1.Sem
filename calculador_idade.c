#include <stdio.h>

int main(void) {
  int anasc, c, idade, ano;
  printf("Informe o ano atual: ");
  scanf("%d", &ano);
  printf("Informe sua data de nascimento: ");
  scanf("%d", &anasc);
  printf("Digite 1 para calcular sua idade aproximada ou 2 para saber sua classificação quanto a sua idade: ");
  scanf("%d", &c);
  idade = ano - anasc;
  switch(c){
    case 1:
    printf("Você tem %d anos", idade);
    break;
    case 2:
    if (idade >= 130){
      printf("Você é um(a) Jedi");
    }
    else if (idade >= 60){
      printf("Você é um(a) idoso(a)");
    }
    else if (idade >= 18){
      printf("Você é um(a) adulto(a)");
    }else if (idade < 13){
      printf("Você é uma criança");
    }else{
      printf("Você é um(a) adolescente");
    break;
    default:
      printf("Valor inválido");
    }  
  }
  return 0;
}
