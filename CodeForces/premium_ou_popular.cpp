#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

typedef pair<ll,ll> pll;

int main(void){

    int n,x,y;
    int last_price;
    vector<int> precos;

    scanf("%d %d",&last_price,&n);
    int aux = 0;
    while(n--){
        scanf("%d %d",&x,&y);
        if( x == 1){ 
            precos.push_back(y);
            last_price += y;
        }
        else { 
            for(int i = (aux-1) ; y !=0 ; i--){
                last_price -= precos[i];
                y--;
            }
        }
        aux++;
    }
    printf("%d\n",last_price);


}