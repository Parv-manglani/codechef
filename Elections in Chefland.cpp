#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,x,count=0;
	int b[n];
	cin >> t;
	for(int i=0;i<t;i++){
	    scanf("%d%d",&n,&x);
	    b[n];
	    for(int j=0;j<n;j++){
	        scanf("%d",&b[j]);
	        if(b[j]>=x) count++;
	    }
    printf("%d\n",count);
    count=0;
	} 

}