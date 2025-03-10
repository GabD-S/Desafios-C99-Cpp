#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char W[11];
        scanf("%s", W);

        int len = strlen(W);
        W[len - 2] = '\0'; 
        printf("%si\n", W);
    }

    return 0;
}