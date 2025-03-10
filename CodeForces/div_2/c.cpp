#include <bits/stdc++.h>
using namespace std;

int main() {
    int testes;
    scanf("%d", &testes);
    while (testes--) {
        int n;
        scanf("%d", &n);
        printf("1 ");
        for (int i = 2; i <= n - 2; i++) {
            printf("%d ", i - 1);
        }
        printf("1 2\n");
    }
    return 0;
}