#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() 
{
    int t;
    scanf("%lld", &t);
    while(t--)
    {
        int n;
        scanf("%lld", &n);

        vector<int> vec(n);
        for(int i = 0; i < n; i++)
        {
            scanf("%lld", &vec[i]);
        }

        bool c = false;

        int i = 0;
        while(i < n - 1)
        {
            if(vec[i] > vec[i + 1])
            {
                c = true;
                break;
            }
            else
            {
                vec[i + 1] -= vec[i];
                vec[i] = 0;
            }

            i++;
        }

        if(c)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}