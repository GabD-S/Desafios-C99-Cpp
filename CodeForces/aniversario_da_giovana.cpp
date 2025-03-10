#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }

    sort(a.begin(), a.end());

    int half = n / 2;
    vector<int> small(a.begin(), a.begin() + half);
    vector<int> large(a.begin() + half, a.end());

    vector<int> result;
    int i = 0, j = 0;
    while (i < small.size() || j < large.size()) {
        if (j < large.size()) result.push_back(large[j++]);
        if (i < small.size()) result.push_back(small[i++]);
    }

    int cheap_count = 0;
    for (int k = 1; k < n - 1; ++k) {
        if (result[k - 1] > result[k] && result[k] < result[k + 1]) {
            ++cheap_count;
        }
    }

    printf("%d\n", cheap_count);
    for (int x : result) {
        printf("%d ", x);
    }
    printf("\n");

    return 0;
}
