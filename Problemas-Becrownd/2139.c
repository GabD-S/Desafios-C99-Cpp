#include <stdio.h>

int main(void)
{

    int mess[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25};
    int mes, dia, faltam, somatorio;

    while (scanf("%d %d", &mes, &dia) != EOF)
    {
        if (mes == 12 && dia == 24)
        {
            printf("E vespera de natal!\n");
        }
        else if (mes == 12 && dia == 25)
        {
            printf("E natal!\n");
        }
        else if (mes == 12 && dia > 25)
        {
            printf("Ja passou!\n");
        }
        else
        {
            somatorio = mess[mes - 1] - dia;
            for (int i = mes; i < 12; i++)
            {
                somatorio += mess[i];
            }
            printf("Faltam %d dias para o natal!\n", somatorio);
        }
    }
}