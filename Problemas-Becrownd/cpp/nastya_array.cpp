#include <bits/stdc++.h>
using namespace std;

int main(void)
{

    int n,a,ans;
    vector<int> v;

    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a);
        v.push_back(a);
    }
    sort(v.begin(),v.end());

    ans = 0;
    if(v[0])
        ans++;

    for (int i = 1; i < v.size(); i++)
    {
        if(v[i] && v[i-1] != v[i])
            ans++;
    }
    
    printf("%d\n",ans);
    

}