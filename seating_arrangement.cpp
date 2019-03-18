#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&y);
        int temp=ceil(y/6.0);
        if(temp%2==1){
            x=y+(12-(((y%12)*2)-1));
        }else{
            x=y-((((y-1)%6+1)*2)-1);
        }
        if(x%6==0)
            printf("%d WS\n",x);
        else if(x%6==1)
            printf("%d WS\n",x);
        else if(x%6==2)
            printf("%d MS\n",x);
        else if(x%6==3)
            printf("%d AS\n",x);
        else if(x%6==4)
            printf("%d AS\n",x);
        else
            printf("%d MS\n",x);
    }
    return 0;
}
