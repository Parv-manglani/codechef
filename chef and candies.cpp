#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,a,b;
    cin >> n;
    for(int i=0;i<n;i++){
        scanf("%d%d",&a,&b);
        
        int k=(a-b)/4;
        if(a<=b)  printf("%d\n",0);
        else if((a-b)%4==0)  printf("%d\n",k);
        else
        printf("%d\n",k+1);
        
    }
}