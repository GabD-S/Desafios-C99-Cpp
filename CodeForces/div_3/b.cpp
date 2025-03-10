#include <bits/stdc++.h>

#define MAX_N 2000

using namespace std;

void resolver() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);

        int cartas[MAX_N][MAX_N];
        int menores[MAX_N], ordem[MAX_N];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d", &cartas[i][j]);
            }
            sort(cartas[i], cartas[i] + m);
            menores[i] = cartas[i][0];
            ordem[i] = i + 1;
        }

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (menores[i] > menores[j]) {
                    int temp = menores[i];
                    menores[i] = menores[j];
                    menores[j] = temp;
                    temp = ordem[i];
                    ordem[i] = ordem[j];
                    ordem[j] = temp;
                }
            }
        }

        int pilha = -1;
        int valido = 1;

        for (int r = 0; r < m && valido; r++) {
            for (int i = 0; i < n && valido; i++) {
                int vaca = ordem[i] - 1;
                int jogou = 0;
                for (int j = 0; j < m; j++) {
                    if (cartas[vaca][j] > pilha) {
                        pilha = cartas[vaca][j];
                        cartas[vaca][j] = -1;
                        jogou = 1;
                        break;
                    }
                }
                if (!jogou) valido = 0;
            }
        }

        if (valido) {
            for (int i = 0; i < n; i++) {
                printf("%d ", ordem[i]);
            }
            printf("\n");
        } else {
            printf("-1\n");
        }
    }
}

int main() {
    resolver();
    return 0;
}