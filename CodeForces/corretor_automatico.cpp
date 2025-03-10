#include <bits/stdc++.h>

using namespace std;

int main(void){

    int questoes;
    int acertos = 0;
    double nota;

    scanf("%d",&questoes);
    getchar();

    for (int i = 0; i < questoes; i++)
    {
        char gab,resp;
        scanf("%c %c",&gab,&resp);
        if(gab == resp)
            acertos++;
        getchar();
    }

    nota = (double) acertos*10/questoes;
    printf("Nota: %.2f\n",nota);
    

}