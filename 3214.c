#include <stdio.h>

void cal(int *e, int *f, int *c)
{
    scanf("%d %d %d", e, f, c);
}

int main()
{
    int lat_1,lat_2,final; 

    int E[3];
    cal(&E[0], &E[1], &E[2]);

    lat_1 = E[0] + E[1];
    lat_2 = E[2];
    final = 0;

    while (lat_1 >= lat_2)
    {
        final += lat_1 / lat_2;
        lat_1 = lat_1 / lat_2 + lat_1 % lat_2;
    }

    printf("%d\n", final);

    return 0;
}
