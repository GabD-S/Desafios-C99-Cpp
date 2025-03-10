#include <bits/stdc++.h>

using namespace std;
 
int main(){
  int tamanho,peso,maispesado = 0;
  char passo;
  stack<int> saco;
  stack<int> pesados;
  pesados.push(0);

  scanf("%d",&tamanho);
  getchar();
  for(int i = 0; i < tamanho; i++){
    scanf("%c %d",&passo,&peso);
    getchar();
    
    if(passo == 'A'){
      saco.push(peso);
      if(peso > maispesado){
        maispesado = peso;
      }
      pesados.push(maispesado);
    }
    else if(passo == 'V'){
      maispesado = pesados.top();
      printf("%d\n",maispesado);
    }
    else{
      pesados.pop();
      saco.pop();
    }
  }
  return 0;
}