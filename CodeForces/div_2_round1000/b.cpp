#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    scanf("%lld", &t);
    while (t--) {
        ll n, l, r;
        scanf("%lld %lld %lld", &n, &l, &r);
        vector<ll> arr(n);

        for (ll i = 0; i < n; i++) {
            scanf("%lld", &arr[i]);
        }

        l = max(l, 1LL) - 1;
        r = min(r, n);
        ll comprimentoIntervalo = min({r - l, r, n - l});

        vector<ll> parteEsquerda(arr.begin(), arr.begin() + r);
        vector<ll> parteDireita(arr.begin() + l, arr.end());

        sort(parteEsquerda.begin(), parteEsquerda.end());
        sort(parteDireita.begin(), parteDireita.end());

        ll somaEsquerda = accumulate(parteEsquerda.begin(), parteEsquerda.begin() + comprimentoIntervalo, 0LL);
        ll somaDireita = accumulate(parteDireita.begin(), parteDireita.begin() + comprimentoIntervalo, 0LL);

        printf("%lld\n", min(somaEsquerda, somaDireita));
    }

    return 0;
}