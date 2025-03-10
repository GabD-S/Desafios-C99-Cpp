#include <bits/stdc++.h>

using namespace std;
typedef tuple<int, int, int> cashier; 

class comparator{
	public:
		bool operator()(cashier a, cashier b){
      if(get<2>(b) < get<2>(a)){
				return true; 
      }
      else if(get<2>(b) == get<2>(a) && get<0>(b) < get<0>(a)){
        return true; 
      }
			return false;
		}
};

int main(){
  int n,m; 
  cashier caixa;
  priority_queue<cashier, vector<cashier>, comparator> caixas;
  queue<int> clientes;
  int aux;
  scanf("%d %d",&n,&m);
  for(int i = 1; i <= n; i++){
    scanf("%d",&aux);
    caixa = make_tuple(i,aux,0);
    caixas.push(caixa);
  }
  for(int i = 1; i <= m; i++){
    scanf("%d",&aux);
    clientes.push(aux);
  }
  int tempo = -1;
  while(!clientes.empty()){
    aux = clientes.front();
    clientes.pop();
    caixa = caixas.top();
    caixas.pop();
    caixa = make_tuple(get<0>(caixa),get<1>(caixa),get<2>(caixa)+get<1>(caixa)*aux);
    caixas.push(caixa);
    if(tempo < get<2>(caixa)){
      tempo = get<2>(caixa);
    }
  }
  printf("%d\n",tempo);

  return 0; // \n
}