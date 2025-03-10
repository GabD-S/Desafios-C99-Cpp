#include <bits/stdc++.h>

using namespace std;
typedef long long int llint;

int main(){
  int n,q;
  scanf("%d %d",&n,&q);
  int left,right,add;
  vector<int> queries(n+1,0);
  for(int i = 1; i <= q; i++){
    scanf("%d %d %d",&left,&right,&add);
    queries[left-1] += add;
    queries[right] -= add;
  }
  vector<llint> result(n+1,0);
  for(int i = 1; i <= n; i++){
    result[i] = result[i-1] + queries[i-1];
    printf("%lld ",result[i]);
  }
  printf("\n");
  return 0; // \n
}