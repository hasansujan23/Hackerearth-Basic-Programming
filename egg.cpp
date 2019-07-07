#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,s,t,q;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>n>>s>>t;
        cout<<n-(min(s,t)-1)<<endl;
    }
    return 0;
}
