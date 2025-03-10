#include <bits/stdc++.h>

using namespace std;

int proximoxor(int n,vector<bool> disponiveis,int max){
  int prox;
  for(int i = 0; i < 32; i++){
    prox = (n ^ (1 << i));
    if(prox < max && disponiveis[prox])
      return prox;
  };
  return n;
}

int main(){
  int t,n;
  scanf("%d",&t);
  int atual;
  for(int i = 0; i < t; i++){
    scanf("%d",&n);
    vector<bool> disponiveis(n,true);
    atual = n-1;
    disponiveis[atual] = false;
    for(int i = 1; i < n; i++){
      printf("%d ",atual);
      do{
        atual = proximoxor(atual,disponiveis,n);
        disponiveis[atual] = false;
      }while(disponiveis[atual]);
    }
    printf("%d\n",atual);
  }
  return 0; // \n
}