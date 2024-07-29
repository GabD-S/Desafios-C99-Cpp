#include <stdio.h>

int main()
{
    int h0, m0, h1, m1;
    int tempo, horas, minutos;
    scanf("%d %d %d %d", &h0, &m0, &h1, &m1);
    tempo = (h1 * 60 + m1) - (h0 * 60 + m0);
    if (tempo <= 0)
    {
        tempo = tempo + 1440;
    }
    horas = tempo / 60;
    minutos = tempo % 60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
    return 0;
}
