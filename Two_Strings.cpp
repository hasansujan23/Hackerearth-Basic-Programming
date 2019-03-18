#include<bits/stdc++.h>
using namespace std;
int a1[125];
int a2[125];
int main()
{
    string s1,s2;
    int ck=0,n;
    cin>>n;
    for(int i=0;i<n;i++){
           cin>>s1>>s2;
    int len1=s1.length();
    int len2=s2.length();
    for(int i=0;i<len1;i++){
        a1[s1[i]]++;
        a2[s2[i]]++;
    }
    for(int i=97;i<123;i++){
        if(a1[i]==a2[i])
            ck=1;
        else{
            ck=0;
            break;
        }
    }
    if(ck==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    for(int i=0;i<125;i++){
        a1[i]=0;
        a2[i]=0;
    }
    }


    return 0;
}
