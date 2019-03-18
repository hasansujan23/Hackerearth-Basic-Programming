#include<bits/stdc++.h>
using namespace std;
int arra[1001];
int main()
{
    int n,b,e,q,ck=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&b);
        arra[b]++;
    }
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        scanf("%d",&e);
        ck=arra[e];
        if(ck>0)
            printf("%d\n",ck);
        else
            printf("NOT PRESENT\n");
    }
    return 0;
}
