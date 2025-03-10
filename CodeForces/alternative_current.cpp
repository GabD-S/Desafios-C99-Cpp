#include <bits/stdc++.h>

using namespace std;

int getSize(const vector<char>& stack) {
    return static_cast<int>(stack.size());
}

int main() {
    char input[100001];
    scanf("%s", input);

    vector<char> stack;
    int inputLength = strlen(input);

    if (inputLength % 2 == 1) {
        printf("No\n");
    } else {
        for (int i = 0; i < inputLength; i++) {
            if (input[i] == '+') {
                if (getSize(stack) && stack.back() == '+') {
                    stack.pop_back();
                } else {
                    stack.push_back('+');
                }
            } else {
                if (getSize(stack) && stack.back() == '-') {
                    stack.pop_back();
                } else {
                    stack.push_back('-');
                }
            }
        }

        if (getSize(stack)) {
            printf("No\n");
        } else {
            printf("Yes\n");
        }
    }

    return 0;
}
