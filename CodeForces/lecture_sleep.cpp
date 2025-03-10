#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    vector<int> a(n), t(n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &t[i]);
    }

    int total_awake = 0;
    for (int i = 0; i < n; i++) {
        if (t[i] == 1) {
            total_awake += a[i];
            a[i] = 0; 
        }
    }

    int max_additional = 0, current_additional = 0;
    for (int i = 0; i < k; i++) {
        current_additional += a[i];
    }
    max_additional = current_additional;

    for (int i = k; i < n; i++) {
        current_additional = current_additional + a[i] - a[i - k];
        max_additional = max(max_additional, current_additional);
    }

    printf("%d\n", total_awake + max_additional);

    return 0;
}