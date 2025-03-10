#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);

        if (a == 1 && b == 1) {
            printf("1\n");
            continue;
        }

        printf("%d\n", b - a);
    }

    return 0;
}