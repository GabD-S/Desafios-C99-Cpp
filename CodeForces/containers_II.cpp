#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<stack<char>> pilhas;

    for (char c : s) {
        bool colocado = false;

        for (auto& pilha : pilhas) {
            if (pilha.top() >= c) {
                pilha.push(c);
                colocado = true;
                break;
            }
        }

        if (!colocado) {
            stack<char> nova_pilha;
            nova_pilha.push(c);
            pilhas.push_back(nova_pilha);
        }
    }

    cout << pilhas.size() << endl;

    return 0;
}
