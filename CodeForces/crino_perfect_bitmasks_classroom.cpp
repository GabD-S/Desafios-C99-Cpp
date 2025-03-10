#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x, y;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &x);

        int k = 0;
        while (!((x >> k) & 1) && k <= 30) {
            k++;
        }
        y = 1 << k;

        if ((x ^ y) <= 0) {
            k = 0;
            while (((x >> k) & 1) && k <= 30) {
                k++;
            }
            y += 1 << k;
        }

        printf("%d\n", y);
    }

    return 0;
}