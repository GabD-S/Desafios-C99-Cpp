#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    
    vector<pair<int, int>> cells;
    
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; ++j) {
                cells.push_back({i + 1, j + 1});
            }
        } else {
            for (int j = m - 1; j >= 0; --j) {
                cells.push_back({i + 1, j + 1});
            }
        }
    }
    
    int base_size = (n * m) / k;
    int extra = (n * m) % k;
    int index = 0;
    
    for (int i = 0; i < k; ++i) {
        int size = base_size + (extra > 0 ? 1 : 0);
        extra--;
        
        printf("%d", size);
        for (int j = 0; j < size; ++j, ++index) {
            printf(" %d %d", cells[index].first, cells[index].second);
        }
        printf("\n");
    }

    return 0;
}
