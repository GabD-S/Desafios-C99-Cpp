#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h> 

int main()
{
    int c;
    scanf("%d", &c);

    while (c > 0)
    {
        c--;
        int n;
        scanf("%d", &n);

        int x, y;
        scanf("%d %d", &x, &y);

        int perto = INT_MAX;
        int pos = 0;

        for (int cont = 0; cont < n; cont++)
        {
            int xb, yb;
            scanf("%d %d", &xb, &yb);

            double d = sqrt(pow(abs(x - xb), 2) + pow(abs(y - yb), 2));

            if (d < perto)
            {
                perto = d;
                pos = cont + 1;
            }
        }

        printf("%d\n", pos);
    }

    return 0;
}
