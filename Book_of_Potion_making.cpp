#include<bits/stdc++.h>
using namespace std;

long long arra[10];

int getNumber(long long n){
    int k=0;
    while(n!=0){
        arra[k]=n%10;
        n=n/10;
        k++;
    }
    return k;
}

int main()
{
    long long n,ck=0,k=1,sum=0;
    scanf("%lld",&n);
    ck=getNumber(n);
    if(ck==10){
        for(int i=9;i>=0;i--){
            sum=sum+(arra[i]*k);
            k++;
        }
        if(sum%11==0){
            printf("Legal ISBN\n");
        }else{
            printf("Illegal ISBN\n");
        }
    }else{
        printf("Illegal ISBN\n");
    }
    return 0;
}
