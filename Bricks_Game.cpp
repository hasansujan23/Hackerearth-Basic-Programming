#include<bits/stdc++.h>
using namespace std;

int main()
{
    int totalBricks;
    int p=1,m,ck=0;
    cin>>totalBricks;
    while(1){
        totalBricks-=p;
        //cout<<totalBricks<<endl;
        ck++;
        if(totalBricks<=0)
            break;
        totalBricks-=2*p;
        //cout<<totalBricks<<endl;
        ck++;
        if(totalBricks<=0)
            break;
        p++;
    }
    if(ck%2==0)
        cout<<"Motu"<<endl;
    else
        cout<<"Patlu"<<endl;
    return 0;
}
