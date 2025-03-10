#include <bits/stdc++.h>

using namespace std;

int main(void) {
    char original[101];
    scanf("%s", original);

    set<string> possibilidades;
    queue<string> q;
    q.push(string(original));

    while (!q.empty()) {
        string current = q.front();
        q.pop();

        if (possibilidades.count(current) == 0) {
            possibilidades.insert(current);
            for (int i = 0; i < current.size(); i++) {
                string temp = current;
                temp.erase(i, 1);
                if (!temp.empty()) {
                    q.push(temp);
                }
            }
        }
    }

    for (const string& elem : possibilidades) {
        printf("%s\n", elem.c_str());
    }

    return 0;
}