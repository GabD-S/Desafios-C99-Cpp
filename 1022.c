#include <stdio.h>

int maximoDivisorComum(int a, int b)
{
    return (b == 0) ? a : maximoDivisorComum(b, a % b);
}

int main()
{
    int n, n1, d1, n2, d2, nf, df, mdc;
    char aux[2];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %*c %d %s %d %*c %d", &n1, &d1, aux, &n2, &d2);

        switch (aux[0])
        {
        case '+':
            nf = (n1 * d2) + (n2 * d1);
            df = d1 * d2;
            mdc = maximoDivisorComum(nf, df);
            if (mdc < 0)
            {
                mdc *= -1;
            }
            printf("%d/%d = %d/%d\n", nf, df, nf / mdc, df / mdc);
            break;
        case '-':
            nf = (n1 * d2) - (n2 * d1);
            df = d1 * d2;
            mdc = maximoDivisorComum(nf, df);
            if (mdc < 0)
            {
                mdc *= -1;
            }
            printf("%d/%d = %d/%d\n", nf, df, nf / mdc, df / mdc);
            break;
        case '*':
            nf = n1 * n2;
            df = d1 * d2;
            mdc = maximoDivisorComum(nf, df);
            if (mdc < 0)
            {
                mdc *= -1;
            }
            printf("%d/%d = %d/%d\n", nf, df, nf / mdc, df / mdc);
            break;
        case '/':
            nf = n1 * d2;
            df = d1 * n2;
            mdc = maximoDivisorComum(nf, df);
            if (mdc < 0)
            {
                mdc *= -1;
            }
            printf("%d/%d = %d/%d\n", nf, df, nf / mdc, df / mdc);
            break;
        }
    }
    return 0;
}
