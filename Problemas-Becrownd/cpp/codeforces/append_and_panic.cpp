#include <bits/stdc++.h>
using namespace std;

int main() {
    char cadeia[2001];
    scanf("%s", cadeia);

    int tamanho = strlen(cadeia);

    set<char> caracteres_unicos(cadeia, cadeia + tamanho);
    int tamanho_filtrado = caracteres_unicos.size();

    int comprimento_t = tamanho - tamanho_filtrado;

    printf("%d\n", comprimento_t);

    return 0;
}
