#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        vector<int> a(n+1);
        for (int i = 1; i <= n; i++){
            scanf("%d", &a[i]);
        }

        vector<vector<int>> adj(n+1);
        for (int i = 1; i <= n-1; i++){
            int u, v;
            scanf("%d %d", &u, &v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<char> ans(n+1, '0');

        for (int u = 1; u <= n; u++){
            for (int v : adj[u]){
                if(u < v && a[u] == a[v]){
                    ans[a[u]] = '1';
                }
            }
        }

        for (int v = 1; v <= n; v++){
            if(adj[v].size() < 2) continue;
            vector<int> neigh;
            neigh.reserve(adj[v].size());
            for (int u : adj[v]){
                neigh.push_back(a[u]);
            }
            sort(neigh.begin(), neigh.end());
            int cnt = 1;
            for (size_t i = 1; i < neigh.size(); i++){
                if(neigh[i] == neigh[i-1]){
                    cnt++;
                } else {
                    if(cnt >= 2)
                        ans[neigh[i-1]] = '1';
                    cnt = 1;
                }
            }
            if(cnt >= 2)
                ans[neigh.back()] = '1';
        }

        for (int i = 1; i <= n; i++){
            printf("%c", ans[i]);
        }
        printf("\n");
    }
    return 0;
}