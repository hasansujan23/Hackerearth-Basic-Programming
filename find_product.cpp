#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arra[1001];
    int n;
    long long product=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arra[i]);
    for(int i=0;i<n;i++){
        product=(product*arra[i])%(1000000000+7);
    }
    printf("%lld\n",product);
    return 0;
}
