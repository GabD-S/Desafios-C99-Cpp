#include <stdio.h>
#include <math.h>

double calcular_media(double n[], int tam) {
    double soma = 0.0;
    for (int i = 0; i < tam; i++) {
        soma += n[i];
    }
    return soma / tam;
}

double calcular_desvio_padrao(double n[], int tam, double media) {
    double soma = 0.0;
    for (int i = 0; i < tam; i++) {
        soma += pow(n[i] - media, 2);
    }
    return sqrt(soma / (tam - 1));
}

int main() {
    int a;
    scanf("%d", &a);
    while (a > 0) {
        int tam;
        scanf("%d", &tam);
        double n[tam];
        for (int i = 0; i < tam; i++) {
            scanf("%lf", &n[i]);
        }
        double media = calcular_media(n, tam);
        double sigma = calcular_desvio_padrao(n, tam, media);
        printf("%.5f\n", sigma);
        scanf("%d", &a);
    }

    return 0;
}
