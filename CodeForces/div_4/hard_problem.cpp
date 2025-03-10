#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        ll m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        ll seated_in_row_1 = min(a, m);
        ll c_left = max(0LL, c - (m - seated_in_row_1));

        ll seated_in_row_2 = min(b, m);
        seated_in_row_2 += min(c_left, m - seated_in_row_2);

        ll total_seated = seated_in_row_1 + seated_in_row_2;
        printf("%lld\n", total_seated);
    }

    return 0;
}
