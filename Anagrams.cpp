#include<bits/stdc++.h>
using namespace std;

int a1[26];
int a2[26];

void getFirstWord(string word){
    for(int i=0;i<word.length();i++){
        a1[word[i]-97]++;
    }
}
void getSecondWord(string word){
    for(int i=0;i<word.length();i++){
        a2[word[i]-97]++;
    }
}

int main()
{
    string name1,name2;
    int sum=0,n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>name1>>name2;
    getFirstWord(name1);
    getSecondWord(name2);
    sum=0;
    for(int i=0;i<26;i++){
        if(a1[i]!=a2[i]){
            sum=sum+abs(a1[i]-a2[i]);
        }
    }
    printf("%d\n",sum);
    for(int i=0;i<26;i++){
        a1[i]=0;
        a2[i]=0;
    }
    }
    return 0;
}
