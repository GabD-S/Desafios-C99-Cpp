#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCases;
    scanf("%d", &testCases);
    while (testCases--) {
        map<string, long long> stringMap;
        int numStrings;
        scanf("%d", &numStrings);
        string strings[numStrings + 1];

        for (int i = 1; i <= numStrings; i++) {
            cin >> strings[i];
            stringMap[strings[i]] = 1;
        }

        for (int i = 1; i <= numStrings; i++) {
            bool canBeSplit = false;
            for (int j = 1; j <= strings[i].size(); j++) {
                string prefix = strings[i].substr(0, j);
                string suffix = strings[i].substr(j);
                if (stringMap[prefix] && stringMap[suffix]) {
                    canBeSplit = true;
                    printf("1");
                    break;
                }
            }
            if (!canBeSplit) printf("0");
        }
        printf("\n");
    }
    return 0;
}
