#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> freq(n + 1, 0);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x <= n) 
                freq[x]++;
        }

        long long ans = 0;
        vector<int> allPrimes; // Supondo que allPrimes já esteja preenchido com todos os primos necessários

        for (int p : allPrimes) {
            if (p > n) break;
            long long countP = freq[p];
            long long sq = (long long)p * p;
            if (sq <= n) {
                long long countSq = freq[sq];
                ans += countP * countSq + (countSq * (countSq + 1LL)) / 2;
            }
        }

        vector<int> primes;
        for (int p : allPrimes) {
            if (p > n) break;
            primes.push_back(p);
        }
        int m = (int)primes.size();

        vector<long long> suf(m + 1, 0);
        for (int i = m - 1; i >= 0; i--) {
            suf[i] = suf[i + 1] + freq[primes[i]];
        }

        for (int i = 0; i < m; i++) {
            int p = primes[i];
            long long countP = freq[p];
            int T = n / p;

            int lowIndex = i + 1;
            int highIndex = (int)(upper_bound(primes.begin() + lowIndex, primes.end(), T) - primes.begin());

            ans += countP * (suf[lowIndex] - suf[highIndex]);
        }

        cout << ans << endl;
    }

    return 0;
}