#include <bits/stdc++.h>

using namespace std;
int main(void){

    int i,n,num;

    scanf("%d",&i);

    for (int j = 0; j < i; j++)
    {
        bool response = true;
        scanf("%d",&n);

        vector<int>numeros;
        set<int>unicos;

        for(int jind = 0; jind < n; jind++){
            scanf("%d",&num);
            numeros.push_back(num);
            unicos.insert(num);

            if(numeros.size() != unicos.size()){
                response = false;
            }
        }

        printf("%s\n",response ? "YES" : "NO");
    }
    

}