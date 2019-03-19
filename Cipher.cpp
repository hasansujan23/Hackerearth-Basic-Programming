#include<bits/stdc++.h>
using namespace std;

int main()
{
    string code;
    int n;
    cin>>code;
    cin>>n;
    for(int i=0;i<code.length();i++){
        if(code[i]>='A'&&code[i]<='Z'){
            if(code[i]+n>90)
                code[i]=((code[i]-65+n)%26)+65;
            else
                code[i]=code[i]+n;
        }
        if(code[i]>='a'&&code[i]<='z'){
            if(code[i]+n>122)
                code[i]=((code[i]-97+n)%26)+97;
            else
                code[i]=code[i]+n;
        }
        if(code[i]>='0'&&code[i]<='9'){
            if(code[i]+n>57)
                code[i]=((code[i]-48+n)%10)+48;
            else
                code[i]=code[i]+n;
        }

    }

    for(int i=0;i<code.length();i++)
        printf("%c",code[i]);
    return 0;
}
