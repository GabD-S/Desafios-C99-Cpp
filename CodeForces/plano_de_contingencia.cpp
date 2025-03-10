#include <bits/stdc++.h>

using namespace std;

int test_m(set<int> regions, int step) {
    auto it = regions.begin();
    while (regions.size() > 1) {
        auto thirteen = regions.find(13);
        if (it == thirteen && regions.size() > 1) {
            return -1;
        }

        auto temp = it;
        for (int i = 0; i < step; i++) {
            it++;
            if (it == regions.end()) {
                it = regions.begin();
            }
            if (it == temp) {
                it++;
                if (it == regions.end()) {
                    it = regions.begin();
                }
            }
        }

        regions.erase(temp);
    }

    return step;
}

int main() {
    set<int> regions;
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        regions.insert(i);
    }

    int m, test_step = 1;
    do {
        m = test_m(regions, test_step);
        test_step++;
    } while (m == -1);

    printf("%d\n", m);
    return 0;
}
