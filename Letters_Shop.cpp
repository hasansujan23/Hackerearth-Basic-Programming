#include<bits/stdc++.h>
using namespace std;

int a[26],b[26];

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        a[s[i]-'a']++;
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        string s1;
        cin>>s1;
        for(int j=0;j<s1.size();j++){
            b[s1[j]-'a']++;
        }

        int ck=0;
        for(int k=0;k<26;k++){
            if(a[k]>0 && b[k]==0){
                ck++;
            }
            cout<<a[k]<<" "<<b[k]<<endl;
        }
        cout<<s1.size()+ck<<endl;
        //memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
    }
    return 0;
}
