#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,s;
    scanf("%lld",&n);
    scanf("%lld",&m);
    for(int i=0;i<n;i++){
        scanf("%lld",&s);
        if(s>=m)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
