#include <bits/stdc++.h>

using namespace std;

int main(void){

    //nummeros iguais = 0
    //numero diferente = 1

    // x xor 1 = 'x logo x = 1
    // x xor 0 = 'x logo x = 0
    //se for igual a b é zero
    // se for diferente é 1

    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a^b);

}