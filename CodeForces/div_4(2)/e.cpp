#include <bits/stdc++.h>
using namespace std;

// Checagem de viabilidade para movimento "up" (colocar '0')
bool feasibleUp(int cur, int ru, int rd, int U, int F) {
    if (ru <= 0) return false;
    int ncur = cur + 1;
    if (ncur > U) return false;
    int maxFinal = ncur + (ru - 1);
    int minFinal = ncur - rd;
    return (minFinal <= F && F <= maxFinal);
}

// Checagem de viabilidade para movimento "down" (colocar '1')
bool feasibleDown(int cur, int ru, int rd, int L, int F) {
    if (rd <= 0) return false;
    int ncur = cur - 1;
    if (ncur < L) return false;
    int maxFinal = ncur + ru;
    int minFinal = ncur - (rd - 1);
    return (minFinal <= F && F <= maxFinal);
}

// Construção de string válida para F >= 0
string constructNonNegative(int F, int k, int n, int m) {
    if (n < k || F > k) return "";
    int total = n + m;
    string res(total, ' ');
    int pos = 0;

    for (int i = 0; i < k; i++) {
        res[pos++] = '0';
    }

    int cur = k, ru = n - k, rd = m;
    int L = 0, U = k;

    while (ru + rd > 0) {
        if (cur == U) {
            if (!feasibleDown(cur, ru, rd, L, F)) return "";
            res[pos++] = '1';
            cur--;
            rd--;
        } else if (cur == L) {
            if (!feasibleUp(cur, ru, rd, U, F)) return "";
            res[pos++] = '0';
            cur++;
            ru--;
        } else {
            bool upOk = feasibleUp(cur, ru, rd, U, F);
            bool downOk = feasibleDown(cur, ru, rd, L, F);
            if (upOk && downOk) {
                if (abs((cur + 1) - F) <= abs((cur - 1) - F)) {
                    res[pos++] = '0';
                    cur++;
                    ru--;
                } else {
                    res[pos++] = '1';
                    cur--;
                    rd--;
                }
            } else if (upOk) {
                res[pos++] = '0';
                cur++;
                ru--;
            } else if (downOk) {
                res[pos++] = '1';
                cur--;
                rd--;
            } else {
                return "";
            }
        }
    }
    return (cur == F) ? res : "";
}

// Construção de string válida para F < 0
string constructNegative(int F, int k, int n, int m) {
    if (m < k || -F > k) return "";
    int total = n + m;
    string res(total, ' ');
    int pos = 0;

    for (int i = 0; i < k; i++) {
        res[pos++] = '1';
    }

    int cur = -k, ru = n, rd = m - k;
    int L = -k, U = 0;

    while (ru + rd > 0) {
        if (cur == L) {
            if (!feasibleUp(cur, ru, rd, U, F)) return "";
            res[pos++] = '0';
            cur++;
            ru--;
        } else if (cur == U) {
            if (!feasibleDown(cur, ru, rd, L, F)) return "";
            res[pos++] = '1';
            cur--;
            rd--;
        } else {
            bool upOk = feasibleUp(cur, ru, rd, U, F);
            bool downOk = feasibleDown(cur, ru, rd, L, F);
            if (upOk && downOk) {
                if (abs((cur + 1) - F) <= abs((cur - 1) - F)) {
                    res[pos++] = '0';
                    cur++;
                    ru--;
                } else {
                    res[pos++] = '1';
                    cur--;
                    rd--;
                }
            } else if (upOk) {
                res[pos++] = '0';
                cur++;
                ru--;
            } else if (downOk) {
                res[pos++] = '1';
                cur--;
                rd--;
            } else {
                return "";
            }
        }
    }
    return (cur == F) ? res : "";
}

// Função principal
int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, m, k;
        scanf("%d %d %d", &n, &m, &k);
        int total = n + m;

        if (n == 0) {
            if (k == m) {
                for (int i = 0; i < m; i++) printf("1");
                printf("\n");
            } else {
                printf("-1\n");
            }
            continue;
        }

        if (m == 0) {
            if (k == n) {
                for (int i = 0; i < n; i++) printf("0");
                printf("\n");
            } else {
                printf("-1\n");
            }
            continue;
        }

        int F = n - m;

        if (abs(F) > k) {
            printf("-1\n");
            continue;
        }

        string ans;
        if (F >= 0) {
            if (n < k) {
                printf("-1\n");
                continue;
            }
            ans = constructNonNegative(F, k, n, m);
        } else {
            if (m < k) {
                printf("-1\n");
                continue;
            }
            ans = constructNegative(F, k, n, m);
        }

        if (ans.empty() || (int)ans.size() != total) {
            printf("-1\n");
        } else {
            printf("%s\n", ans.c_str());
        }
    }

    return 0;
}