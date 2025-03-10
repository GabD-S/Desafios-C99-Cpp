#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char s[110]; 
        scanf("%s", s);

        int n = strlen(s);
        int hasPair = 0;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == s[i + 1]) {
                hasPair = 1;
                break;
            }
        }
        if (n > 1 && hasPair)
            printf("1\n");
        else
            printf("%d\n", n);
    }

    return 0;
}