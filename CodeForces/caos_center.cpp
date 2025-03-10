#include <bits/stdc++.h>

using namespace std;
typedef tuple<int, int, int, int, int> client; 

class comparator{
  public:
    bool operator()(client a, client b){
      int ai,at,apr,amax,amin;
      int bi,bt,bpr,bmax,bmin;
      tie(ai,at,apr,amax,amin) = a;
      tie(bi,bt,bpr,bmax,bmin) = b;
      if(bmin < amin)
        return true;
      else if(bmin == amin){
        if(bi < ai)
          return true;
      }
      return false;
    }
};
 
int main(){
  client cliente;
  priority_queue<client, vector<client>, comparator> clientes;

  int n,t,p,r,max,min;
  scanf("%d",&n);
  for(int i = 1; i <= n; i++){
    scanf("%d %d %d",&t,&p,&r);
    cliente = make_tuple(i,t,p+r,p,0);
    clientes.push(cliente);
  }

  int i,pr, tempo = 0;
  while(!clientes.empty()){
    cliente = clientes.top();
    clientes.pop();
    tie(i,t,pr,max,min) = cliente;
    if(max >= tempo && tempo >= min){
      tempo += t;
    }
    else if(min >= tempo){
      tempo = min + t;
    }
    else{
      cliente = make_tuple(i,t,pr,max+pr,min+pr);
      clientes.push(cliente);
    }
  }
  printf("%d\n",tempo);

  return 0; 
}