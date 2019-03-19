#include<bits/stdc++.h>
using namespace std;

long long arra[1000001];

int main()
{
    long long n,q,l,r,sum=0,x,i;
    scanf("%lld%lld",&n,&q);
    for(i=0;i<n;i++){
        scanf("%lld",&x);
        sum=sum+x;
        arra[i]=sum;
    }

    for(i=0;i<q;i++){
        scanf("%lld%lld",&l,&r);
        printf("%lld\n",(arra[r-1]-arra[l-2])/((r-l)+1));
    }
    return 0;
}
