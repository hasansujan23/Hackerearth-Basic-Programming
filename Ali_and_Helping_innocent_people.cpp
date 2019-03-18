#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    cin>>s1;
    if(s1[2]=='A'||s1[2]=='E'||s1[2]=='I'||s1[2]=='O'||s1[2]=='U'||s1[2]=='Y'){
        cout<<"invalid"<<endl;
    }else{
       if((s1[0]+s1[1])%2==0&&(s1[3]+s1[4])%2==0&&(s1[4]+s1[5])%2==0&&(s1[7]+s1[8])%2==0){
        cout<<"valid"<<endl;
       }
       else{
        cout<<"invalid"<<endl;
       }
    }
    return 0;
}
