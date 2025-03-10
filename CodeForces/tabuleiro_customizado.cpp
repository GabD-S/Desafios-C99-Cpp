#include <bits/stdc++.h>

using namespace std;

char tabuleiro[102][102];

void printTabuleiro(int lin, int col){
  for(int i = 1; i <= lin; i++){
    for(int j = 1; j <= col; j++)
      printf("%c",tabuleiro[i][j]);
    printf("\n");
  }
}

void resetaTabuleiro(){
  for(int i = 0; i < 102; i++){
    for(int j = 0; j < 102; j++){
      if(i%2 == 0){
        if(j%2 == 0)
          tabuleiro[i][j] = 'B';
        else
          tabuleiro[i][j] = 'W';
      }
      else{
        if(j%2 != 0)
          tabuleiro[i][j] = 'B';
        else
          tabuleiro[i][j] = 'W';
      }
    }
  }
}

int main(){
  int lin,col; // linha e coluna
  char peca;
  scanf("%d %d",&lin,&col);
  getchar();
  
  resetaTabuleiro();
  for(int i = 1; i <= lin; i++){
    for(int j = 1; j <= col; j++){
      scanf("%c",&peca);
      if(peca == '-')
        tabuleiro[i][j] = peca;
    }
    getchar();
  }
  
  printTabuleiro(lin,col);
  return 0; // \n
}