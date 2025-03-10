#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;

    scanf("%lld %lld", &n, &k);

    vector<long long> v(n);
    vector<long long> dormindo(n);
    vector<long long> soma(n + k, 0);
    
    for (int i = 0; i < n; i++)
        scanf("%lld", &v[i]);
    for (int i = 0; i < n; i++)
        scanf("%lld", &dormindo[i]);
    for (int i = n-1; i >= n-k; i--) {
        soma[i] = soma[i+1] + v[i]*(dormindo[i]^1);
    }
    for (int i = n-k; i >= 0; i--) {
        soma[i] = soma[i+1] + (dormindo[i]^1)*v[i] - soma[i+k];
    }
    long long teoremas = 0;
    for (int i = 0; i < n; i++)
        if (dormindo[i])
            teoremas += v[i];
    auto it = max_element(soma.begin(), soma.end());
    teoremas += *it;
    printf("%lld\n", teoremas);
}