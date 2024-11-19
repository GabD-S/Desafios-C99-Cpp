#include <bits/stdc++.h>

int main(void){

    long long int n;
    scanf("%lld",&n);

    while (n%2 == 0){ 
        n/=2;
    }

    printf("%lld\n",n);    

}