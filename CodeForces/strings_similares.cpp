#include <bits/stdc++.h>

int main() {
    int t, n;
    char s[1001]; 

    scanf("%d", &t);

    while(t--) {
        scanf("%d %s", &n, s);
        for(int i = 0; i < 2*n - 1; i += 2) {
            printf("%c", s[i]);
        }
        printf("\n");
    }

    return 0;
}
