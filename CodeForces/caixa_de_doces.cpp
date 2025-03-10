#include <bits/stdc++.h>
#define llint long long int
  
using namespace std;
int main(){
  int cases,boxes,temp,eaten,smallest;

  scanf("%d",&cases);

  for(int count = 0; count < cases; count++){
    vector<int> candies;
    eaten = 0;

    scanf("%d",&boxes);
    for(int i = 0; i < boxes; i++){
      scanf("%d",&temp);
      candies.push_back(temp);
    }

    sort(candies.begin(),candies.end());
    smallest = candies[0];
    for(int ind = 1; ind < candies.size(); ind++){
      eaten = eaten + (candies[ind] - smallest);
    }

    printf("%d\n",eaten);
  }

  return 0;
}