#include<bits/stdc++.h>
using namespace std;

bool status[1002];
void siv(){
    int n=1000;
    int q=sqrt(n);

    for(int i=4;i<=n;i+=2)
        status[i]=1;
    for(int i=3;i<=q;i+=2){
        if(status[i]==0){
            for(int j=i*i;j<=n;j+=i)
                status[j]=1;
        }
    }
    status[1]=1;

}

int main()
{
    int n;
    scanf("%d",&n);
    siv();
    for(int i=1;i<=n;i++){
        if(status[i]==0){
            printf("%d",i);
            printf(" ");
        }
    }
    return 0;
}
