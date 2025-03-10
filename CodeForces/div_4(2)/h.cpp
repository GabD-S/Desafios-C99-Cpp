#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 998244353;

struct Fenw {
    int n;
    vector<ll> f;

    Fenw(int n) : n(n), f(n+1, 0) {}

    void upd(int i, ll d) {
        for(; i <= n; i += i & -i) {
            f[i] = (f[i] + d) % MOD;
            if(f[i] < 0) f[i] += MOD;
        }
    }

    ll qry(int i) {
        ll s = 0;
        for(; i; i -= i & -i) {
            s = (s + f[i]) % MOD;
        }
        return s;
    }

    ll rng(int l, int r) {
        return l > r ? 0 : (qry(r) - qry(l - 1) + MOD) % MOD;
    }
};

int maxExp = 400000;

void precompute(vector<ll>& p) {
    p.resize(maxExp + 1);
    p[0] = 1;
    for(int i = 1; i <= maxExp; i++) {
        p[i] = (p[i - 1] * 2) % MOD;
    }
}

void solveCase(const vector<ll>& p) {
    string s;
    cin >> s;
    int n = s.size();
    Fenw L0(n), L1(n), R0(n), R1(n);
    vector<int> bit(n + 1, 0);

    for (int i = 0; i < n; i++) {
        int pos = i + 1;
        if(s[i] == '0') {
            bit[pos] = 0;
            L0.upd(pos, p[pos - 1]);
            R0.upd(pos, p[n - pos]);
        } else {
            bit[pos] = 1;
            L1.upd(pos, p[pos - 1]);
            R1.upd(pos, p[n - pos]);
        }
    }

    ll B = 0;
    for (int j = 2; j <= n; j++) {
        if(bit[j] == 0) {
            ll sum = L1.qry(j - 1);
            B = (B + (p[n - j] * sum) % MOD) % MOD;
        } else {
            ll sum = L0.qry(j - 1);
            B = (B + (p[n - j] * sum) % MOD) % MOD;
        }
    }

    ll A = (p[n] - 1 + MOD) % MOD;
    int q;
    cin >> q;

    while(q--) {
        int x;
        cin >> x;
        int oldVal = bit[x], newVal = 1 - oldVal;

        ll oldSelf = (oldVal == 0 ? (p[n - x] * L1.qry(x - 1)) % MOD : (p[n - x] * L0.qry(x - 1)) % MOD);
        ll newSelf = (newVal == 0 ? (p[n - x] * L1.qry(x - 1)) % MOD : (p[n - x] * L0.qry(x - 1)) % MOD);
        ll delta_self = (newSelf - oldSelf) % MOD;
        if(delta_self < 0) delta_self += MOD;

        ll d = p[x - 1], A0 = R0.rng(x + 1, n), A1 = R1.rng(x + 1, n);
        ll delta_right = (oldVal == 0 && newVal == 1 ? (d * ((A0 - A1) % MOD)) % MOD : (d * ((A1 - A0) % MOD)) % MOD);
        if(delta_right < 0) delta_right += MOD;

        ll delta_total = (delta_self + delta_right) % MOD;
        B = (B + delta_total) % MOD;
        if(B < 0) B += MOD;

        if(oldVal == 0) {
            L0.upd(x, -p[x - 1]);
            R0.upd(x, -p[n - x]);
        } else {
            L1.upd(x, -p[x - 1]);
            R1.upd(x, -p[n - x]);
        }

        if(newVal == 0) {
            L0.upd(x, p[x - 1]);
            R0.upd(x, p[n - x]);
        } else {
            L1.upd(x, p[x - 1]);
            R1.upd(x, p[n - x]);
        }

        bit[x] = newVal;
        ll ans = (A + B) % MOD;
        if(ans < 0) ans += MOD;
        cout << ans << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    vector<ll> p;
    precompute(p);
    while(t--) solveCase(p);
    return 0;
}