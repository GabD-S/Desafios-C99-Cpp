#include <bits/stdc++.h>

using namespace std;

int main() {
    long long numTests, letterCount, pairCount;
    char inputStr[51];

    scanf("%lld", &numTests);

    while (numTests > 0) {
        scanf("%s", inputStr);
        vector<long long> letterFrequency(26);
        pairCount = 0;

        for (int i = 0; i < strlen(inputStr); i++) {
            if (letterFrequency[inputStr[i] - 'a'] < 2) {
                letterFrequency[inputStr[i] - 'a']++;
                pairCount++;
            }
        }

        printf("%lld\n", pairCount / 2);
        numTests--;
    }

    return 0;
}
