#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,r,k,ck=0;
    scanf("%d%d%d",&l,&r,&k);
    for(int i=l;i<=r;i++){
        if(i%k==0)
            ck++;
    }
    printf("%d\n",ck);
    return 0;
}
