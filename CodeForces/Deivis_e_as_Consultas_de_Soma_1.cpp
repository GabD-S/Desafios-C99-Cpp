#include <bits/stdc++.h>
 
using namespace std;
typedef long long int llint;
 
int main(){
  int n,q,aux;
  scanf("%d %d",&n,&q);
  vector<llint> somas(n+1,0);
 
  for(int i = 1; i <= n; i++){
    scanf("%d",&aux);
    somas[i] = somas[i-1] + aux;
  }
 
  int l,r;
  for(int i = 0; i < q; i++){
    scanf("%d %d",&l,&r);
    printf("%lld\n",(llint) somas[r]-somas[l-1]);
  }
 
  return 0;
}