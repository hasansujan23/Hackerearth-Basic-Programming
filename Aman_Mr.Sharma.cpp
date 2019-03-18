#include<bits/stdc++.h>
using namespace std;
//#define pi 22.0/7.0
const double pi = 22.0/7.0;

int main()
{
    int n,ck=0;
    double r,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lf%lf",&r,&x);
        if(100.0*x>=(2*pi*r)){
            ck++;
        }
    }
    printf("%d\n",ck);
    return 0;
}
