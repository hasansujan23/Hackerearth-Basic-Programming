#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x=0,y=0;
    string str;
    cin>>str;
    int len=str.length();

    for(int i=0;i<len;i++){
        if(str[i]=='L')
            x--;
        else if(str[i]=='R')
            x++;
        else if(str[i]=='U')
            y++;
        else
            y--;
    }
    cout<<x<<" "<<y<<endl;
    return 0;
}
