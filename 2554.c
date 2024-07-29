#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 1, qntp, qntli, dia, mes, ano, pd_on, pode = 0, dia_p = 9999, mes_p = 9999, ano_p = 9999;
    bool legal = false;
        while (scanf("%d %d", &qntp, &qntli) != EOF){
            dia_p = 9999;
            mes_p = 9999;
            ano_p = 9999;
            for (int i = 0; i < qntli; i++)
            {
                scanf("%d/%d/%d", &dia, &mes, &ano);
                pode = 0;
                for (int i = 0; i < qntp; i++)
                {
                    scanf("%d", &pd_on);
                    pode += pd_on;
                    if (pode == qntp)
                    {
                        if (ano < ano_p || (ano == ano_p && mes < mes_p) || (ano == ano_p && mes == mes_p && dia < dia_p))
                        {
                            dia_p = dia;
                            mes_p = mes;
                            ano_p = ano;
                            legal = true;
                        }
                    }
                }
            }
            if (legal == true)
            {
                printf("%d/%d/%d\n", dia_p, mes_p, ano_p);
                legal = false;
            }
            else
            {
                printf("Pizza antes de FdI\n");
            }
        }
        
        return 0;
}
