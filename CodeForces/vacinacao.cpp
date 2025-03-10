#include <bits/stdc++.h>

using namespace std;
typedef long long int llint;

int main(){
  int n,q;
  scanf("%d %d",&n,&q);
  vector<int> gripados; // vetor original
  vector<int> vacinas(n+1,0);
  vector<int> operacoes(n+1,0);
  vector<llint> somasvac(n+1,0);
  vector<llint> somasope(n+1,0);
  int left,right,add;
  
  for(int i = 0; i < n; i++){
    scanf("%d",&add); // usando add como aux
    gripados.push_back(add);
  }

  for(int i = 0; i < q; i++){
    scanf("%d %d %d",&left,&right,&add);
    vacinas[left-1] += add;
    vacinas[right] -= add;
    operacoes[left-1] += 1;
    operacoes[right] -= 1;
  }

  llint total = 0;
  for(int i = 1; i <= n; i++){
    somasvac[i] = somasvac[i-1] + vacinas[i-1];
    somasope[i] = somasope[i-1] + operacoes[i-1];
    if((gripados[i-1] - somasvac[i]) > 0)
      total += somasope[i];
  }
  printf("%lld\n",total);
  return 0; // \n
}