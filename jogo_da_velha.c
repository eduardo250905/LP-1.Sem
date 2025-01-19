#include <stdio.h>
#define Max 3

int main(void) {
  int l, c, acabou=0, cont=1, jog=1;
  char tab[Max][Max];
  //Assume todo valor da matriz tab como ' '
  for(l=0; l<Max; l++){
    for(c=0; c<Max; c++){
      tab[l][c] =  ' ';
    }
  }
  //Laço de repetição válido até a var acabou != 0
  while(acabou == 0){
    //Seleção de linha
    printf("Vez do jogador %d!!!\n", jog);
    printf("Digite a linha que deseja jogar: ");
    scanf("%d", &l);
    while((l < 0) || (l >= Max)){
      printf("Jogada invalida, digite novamente: ");
      scanf("%d", &l);
    }
    //Seleção de coluna
    printf("Digite a coluna que deseja jogar: ");
    scanf("%d", &c);
    while((c < 0) || (c >= Max)){
      printf("Jogada inválida, digite novamente: ");
      scanf("%d", &c);
    }
    //Verifica se a posição já está ocupada
    if(tab[l][c] != ' '){
      printf("Esse espaço já está ocupado, tente novamente!\n");
    }
    else{
      //Modifica os simbolos a cada jogada
      if(jog == 1){
        tab[l][c] = 'x';
      }
      else{
        tab[l][c] = 'o';
      }
      //Desenho do tabuleiro
      for(l=0; l<Max; l++){
        for(c=0; c<Max; c++){
          printf("| %c |", tab[l][c]);
        }
        printf("\n");
      }
      //Verificar se algum dos jogadores ganhou
      for(l=0; l<Max; l++){
        if((tab[l][0] == tab[l][1]) && (tab[l][0] == tab[l][2]) && (tab[l][0] != ' ')){
          printf("Fim de jogo, o vencedor foi o jogador %d", jog);
          acabou = 1;
          break;
        } 
      }
      for(c=0; c<Max; c++){
        if((tab[0][c] == tab[1][c]) && (tab[1][c] == tab[2][c]) && (tab[0][c] != ' ')){
          printf("Fim de jogo, o vencedor foi o jogador %d", jog);
          acabou = 1;
          break;
        }
      }
      if((tab[0][0] == tab[1][1]) && (tab[1][1] == tab[2][2]) && (tab[0][0] != ' ')){
          printf("Fim de jogo, o vencedor foi o jogador %d", jog);
          acabou = 1;
          break;
        }
      if((tab[2][0] == tab[1][1]) && (tab[1][1] == tab[0][2]) && (tab[2][0] != ' ')){
        printf("Fim de jogo, o vencedor foi o jogador %d", jog);
        acabou = 1;
        break;
      }
      //Alterna os jogadores a cada rodada
      if(jog == 1){
          jog = 2;
        }
      else{
          jog = 1;
        }
      //Verifica o número de rodadas e uma possível velha
      cont++;
      if(cont > 9){
          printf("Velha!!");
          acabou = 1;
        }
    }
  }
  return 0;
}
