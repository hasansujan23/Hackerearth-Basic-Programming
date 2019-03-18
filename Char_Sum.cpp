#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    int sum=0;
    cin>>s1;
    for(int i=0;i<s1.length();i++){
        sum=sum+(s1[i]-96);
    }
    cout<<sum<<endl;
    return 0;
}
