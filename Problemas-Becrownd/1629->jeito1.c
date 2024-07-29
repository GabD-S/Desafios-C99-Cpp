#include <stdio.h>

int sumDigits(int x)
{
    int ret = 0;
    while (x > 0)
    {
        ret += x % 10;
        x /= 10;
    }
    return ret;
}

int main()
{
    int n;
    char s[1001];

    while (scanf("%d", &n), n != 0)
    {
        getchar();

        while (n--)
        {
            int i = 0;
            char c;

            while ((c = getchar()) != '\n' && c != EOF)
            {
                s[i++] = c;
            }
            s[i] = '\0'; 

            int sum[2] = {0, 0}, ans = 0;
            i = 0;

            while (s[i] != '\0')
            {
                sum[i % 2] += s[i] - '0';
                i++;
            }

            ans = sumDigits(sum[0]) + sumDigits(sum[1]);

            printf("%d\n", ans);
        }
    }

    return 0;
}
