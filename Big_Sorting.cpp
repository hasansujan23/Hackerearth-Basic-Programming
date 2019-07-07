#include<bits/stdc++.h>
using namespace std;

bool compare(string i,string j){
    if(i.length()==j.length()) return (i<j);
    return i.length()<j.length();
}

int main()
{
    long long n,i;
    vector<string>v;

    cin>>n;
    for(i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }

    sort(v.begin(),v.end(),compare);

    for(i=0;i<n;i++){
        cout<<v[i]<<endl;
    }

    return 0;
}
