#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k=1;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("*   *\n");
        printf("*   *\n");
        if(k<=n){
          printf("*****\n");
          k++;
        }
    }
    return 0;
}
