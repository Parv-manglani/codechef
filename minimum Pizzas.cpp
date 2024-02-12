#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,a,b;
	cin >> n;
	for(int i=0;i<n;i++){
	    scanf("%d%d",&a,&b);
	    int k=a*b;
	    if(k%4==0) printf("%d\n",k/4);
	    else printf("%d\n",(k/4)+1);
	    }
}
