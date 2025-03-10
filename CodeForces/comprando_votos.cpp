#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int repeat, aux = 0;
    int number, initial_number;
    vector<int> vector_numbers;

    scanf("%d", &repeat);
    int repeat_aux = repeat;

    while (repeat--) {
        scanf("%d", &number);
        vector_numbers.push_back(number);
    }

    initial_number = vector_numbers[0];

    priority_queue<int> pq;
    for (int i = 1; i < repeat_aux; i++) {
        pq.push(vector_numbers[i]);
    }

    while (!pq.empty() && pq.top() >= initial_number) {
        int top = pq.top();
        pq.pop();
        top--;
        initial_number++;
        aux++;
        pq.push(top);
    }

    printf("%d\n", aux);

    return 0;
}