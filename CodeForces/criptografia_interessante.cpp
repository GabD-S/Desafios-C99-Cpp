#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  int n,m,c,aux;
  scanf("%d %d %d",&n,&m,&c);
  
  int operacoes = (n-m)+1;
  int right = operacoes;
  
  vector<int> vectorn(n,0);
  for(int i = 0; i < n; i++){
    scanf("%d",&aux);
    vectorn[i] = aux;
  }
  
  vector<int> vectorm(m,0);
  for(int i = 0; i < m; i++){
    scanf("%d",&aux);
    vectorm[i] = aux;
  }
  
  vector<int> delta(n+1,0);
  for(int i = 0; i < m; i++){
    delta[i] += vectorm[i];
    delta[right] -= vectorm[i];
    right++;
    if(right > n)
      right = n;
  }
  
  vector<int> psum(n+1,0);
  for(int i = 1; i <= n; i++){
  	psum[i] = psum[i-1] + delta[i-1];
    printf("%d ", (psum[i] + vectorn[i-1])%c);
  }
  printf("\n");
  return 0;
}