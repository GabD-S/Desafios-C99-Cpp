#include <stdio.h>

int main(void)
{
    int dia, hr_in, min_in, seg_in, dia_f, hr_fin, min_fin, seg_fin, inter_temp, inter_dia;
    scanf("Dia %d", &dia);
    scanf("%d : %d : %d", &hr_in, &min_in, &seg_in);

    scanf(" Dia %d", &dia_f);
    scanf("%d : %d : %d", &hr_fin, &min_fin, &seg_fin);

    inter_temp = (dia_f*86400+hr_fin*3600+min_fin*60+seg_fin) - (dia*86400+hr_in*3600+min_in*60+seg_in);

    int dias = inter_temp/86400;
    int aux = inter_temp%86400;
    int result = aux/3600;
    int aux1 = aux%3600;
    int min = aux1/60;
    int segundos = aux1%60;

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dias, result, min, segundos);

    return 0;
}