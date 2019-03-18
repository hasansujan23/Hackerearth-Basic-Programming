#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,sh,sm,eh,em,cal=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d%d%d",&sh,&sm,&eh,&em);
        cal=((eh*60)+em)-((sh*60)+sm);
        printf("%d %d\n",cal/60,cal%60);
    }
    return 0;
}
