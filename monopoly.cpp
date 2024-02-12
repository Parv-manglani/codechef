#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,p,q,r,s;
	cin >> n;
	for(int i=0;i<n;i++){
	    scanf("%d%d%d%d",&p,&q,&r,&s);
	    int sum=p+q+r+s;
	    if(sum-p<p || sum-q<q || sum-r<r || sum-s<s) 
	    printf("YES\n");
	    else printf("NO\n");
	}

}
