#include <bits/stdc++.h>
using namespace std;

int main() {
    int qnt_vei, fato_amostra, limite_peso;
    vector<int> peso;
    int tempo_gasto = 0;

    scanf("%d %d %d", &qnt_vei, &fato_amostra, &limite_peso);
    for (int i = 0; i < qnt_vei; i++) {
        int p;
        scanf("%d", &p);
        peso.push_back(p);
    }

    int index = 0;
    while (!peso.empty()) {
        if (index % fato_amostra == 0) {
            if (peso.front() > limite_peso) {
                int replace_peso = peso.front() - 2;
                peso.push_back(replace_peso);
                tempo_gasto += 10;
            } else {
                tempo_gasto += 5;
            }
        } else {
            tempo_gasto += 1;
        }
        peso.erase(peso.begin());
        index++;
    }

    printf("%d\n", tempo_gasto);
    return 0;
}
