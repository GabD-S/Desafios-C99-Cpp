#include <bits/stdc++.h>

using namespace std;

vector<int> cubos;

int binarySearch(int valor){
  int pos = -1;
  int left = 0;
  int right = cubos.size()-1;
  int mid = (left+right)/2;

  while(left <= right){
    if(cubos[mid] == valor)
      pos = mid+1;
    
    if(cubos[mid] < valor)
      left = mid + 1;

    if(cubos[mid] >= valor)
      right = mid - 1;

    mid = (left+right)/2;
  }
  return pos;
}

int main(){
  int n,q,aux; 
  scanf("%d %d",&n,&q);

  for(int i = 0; i < n; i++){
    scanf("%d",&aux);
    cubos.push_back(aux);
  }
  sort(cubos.begin(),cubos.end());

  for(int i = 0; i < q; i++){
    scanf("%d",&aux);
    printf("%d ",binarySearch(aux));
  }
  printf("\n");

  return 0; // \n
}