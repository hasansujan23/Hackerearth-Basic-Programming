#include<bits/stdc++.h>
using namespace std;
int arra[10]={6,2,5,5,4,5,6,3,7,6};

int getTotalMatchstick(string str){
    int sum=0;
    for(int i=0;i<str.length();i++){
        sum=sum+arra[str[i]-48];
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string number,output="";
    cin>>number;
    int sum=getTotalMatchstick(number);
    int one=0,seven=0;
    if(sum%2==0)
        one=sum;
    else{
        one=sum-3;
        seven=1;
    }
    //printf("%d\n",sum);
    //printf("%d %d\n",one,seven);
    if(seven!=0)
        output=output+"7";
    if(one!=0){
        for(int i=0;i<one/2;i++)
            output=output+"1";
    }
    cout<<output<<endl;
    one=0;
    seven=0;
    sum=0;
    output="";
    }

    return 0;
}
