#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

typedef pair<int,int> pii;

int main(void){

    int t,n,n_numbers,n_numbers2;
    scanf("%d",&t);

    while(t--){
        vector<pii> numbers;
        bool flag = true;
        scanf("%d",&n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d",&n_numbers,&n_numbers2);
            numbers.push_back(make_pair(n_numbers,n_numbers2));
            if((numbers[i].first + numbers[i].second) % 2 == 0){
                flag = false;
            }
        }
        printf("%s\n",flag ? "Yes" : "No");
        

    }

}