#include<bits/stdc++.h>
using namespace std;

string str;

bool checkPalindrome(string str){
    bool ck=true;
    int i,j;
    int len=str.length();
    for(i=0,j=len-1;i<len/2;i++,j--){
        if(str[i]==str[j]){
            ck=true;
        }else{
            ck=false;
            break;
        }
    }
    return ck;
}

int main()
{
    cin>>str;
    if(checkPalindrome(str))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
