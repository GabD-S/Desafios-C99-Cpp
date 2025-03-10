#include <bits/stdc++.h>
using namespace std;

vector<int> maximizar_pontos(vector<pair<int, vector<int>>> casos_de_teste) {
    vector<int> resultados;

    for (auto& caso : casos_de_teste) {
        int n = caso.first;
        vector<int>& arr = caso.second;
        vector<int> pares;
        vector<int> impares;

        for (int num : arr) {
            if (num % 2 == 0) {
                pares.push_back(num);
            } else {
                impares.push_back(num);
            }
        }

        vector<int> rearranjado = pares;
        rearranjado.insert(rearranjado.end(), impares.begin(), impares.end());

        int pontos = 0;
        long long s = 0;
        for (int num : rearranjado) {
            s += num;
            if (s % 2 == 0) {
                pontos++;
                while (s % 2 == 0) {
                    s /= 2;
                }
            }
        }

        resultados.push_back(pontos);
    }

    return resultados;
}

int main() {
    int t;
    scanf("%d", &t);
    vector<pair<int, vector<int>>> casos_de_teste(t);

    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        vector<int> arr(n);
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
        }
        casos_de_teste[i] = {n, arr};
    }

    vector<int> resultados = maximizar_pontos(casos_de_teste);

    for (int resultado : resultados) {
        printf("%d\n", resultado);
    }

    return 0;
}