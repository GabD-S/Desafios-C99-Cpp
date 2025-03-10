#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll soma(ll num) {
    return num * (num + 1) / 2;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        ll k, x;
        scanf("%lld %lld", &k, &x);
        ll l = 1, tot = 2 * k - 1, r = 2 * k - 1;
        bool grande = false;
        while (l <= r) {
            ll meio = (l + r) >> 1;
            if (meio >= k) {
                if (soma(k) + soma(k - 1) - soma(2 * k - 1 - meio) >= x) {
                    grande = true;
                } else {
                    grande = false;
                }
            } else {
                if (soma(meio) >= x) {
                    grande = true;
                } else {
                    grande = false;
                }
            }
            if (grande) {
                tot = meio;
                r = meio - 1;
            } else {
                l = meio + 1;
            }
        }
        printf("%lld\n", tot);
    }
    return 0;
}