#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, M;
    scanf("%lld %lld", &N, &M);

    long long total = N * M;
    long long verdes = total / 2;
    if (total % 2 != 0) {
        verdes += 1;
    }
    printf("%lld\n", verdes);

    return 0;
}
