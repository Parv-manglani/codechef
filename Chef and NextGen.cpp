#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,a,b,x,y;
	cin >> n;
	for(int i=0;i<n;i++){
	    scanf("%d%d%d%d",&a,&b,&x,&y);
	    int k=a*b;
	    int p=x*y;
	    if(p>=k) printf("yes\n");
	    else printf("no\n");
	    
	}

}
