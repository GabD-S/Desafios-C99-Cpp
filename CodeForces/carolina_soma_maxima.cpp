#include <bits/stdc++.h>

using namespace std;
typedef long long int llint;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n,q,aux;
  cin >> n >> q;

  vector<int> original;
  vector<int> consultas(n+1,0);
  vector<llint> acumulado(n+1,0);

  for(int i = 0; i < n; i++){
    cin >> aux;
    original.push_back(aux);
  }

  int left,right;
  for(int i = 0; i < q; i++){
    cin >> left >> right;
    consultas[left-1] += 1;
    consultas[right] -= 1;
  }

  for(int i = 1; i <= n; i++)
    acumulado[i] = acumulado[i-1] + consultas[i-1];

  sort(acumulado.begin()+1,acumulado.end(),greater<llint>()); // O(nlogn)
  sort(original.begin(),original.end(),greater<int>()); // O(nlogn)

  llint soma = 0;
  for(int i = 0; i < n; i++)
    soma += (acumulado[i+1]*original[i]);
  
  cout << soma << "\n";
  return 0; // \n
}