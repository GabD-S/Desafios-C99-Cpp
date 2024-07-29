#include <stdio.h>

int main()
{

    int n, aux, certifica = 0;

    while (1)
    {
        scanf("%d", &n);
        if(n == 0 ){break;}

        for(int i = 0; i < n; i++){ 
        int qest[n];

        for (int i = 0; i < 5; i++)
        {
            scanf("%d", &qest[i]);
            if (qest[i] <= 127)
            {
                aux = i;
                certifica++;
            }
        }
        if (certifica == 1)
        {
            switch (aux)
            {
            case 0:
                printf("A\n");
                break;
            case 1:
                printf("B\n");
                break;
            case 2:
                printf("C\n");
                break;
            case 3:
                printf("D\n");
                break;
            case 4:
                printf("E\n");
                break;
            }
        }
        else
        {
            printf("*\n");
        }
        certifica = 0;
        }
    }
}