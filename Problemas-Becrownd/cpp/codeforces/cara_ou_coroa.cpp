#include <bits/stdc++.h>

int main(void){
    double l, g;
    double porcentagem1;
    double porcentagem;
    scanf("%lf %lf", &l, &g);
    
    porcentagem = (l / (l + g)) * 100;
    porcentagem1 = (g / (l + g)) * 100;
    
    printf("%d %d\n", (int)porcentagem, (int)porcentagem1);    

    return 0;
}
