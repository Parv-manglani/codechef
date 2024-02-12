#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,a,b,c,d;
	cin >> n;
	for(int i=0;i<n;i++){
	    scanf("%d%d",&a,&b);
	    scanf("%d%d",&c,&d);
	    if(c-a>=0 && d-b>=0) printf("POSSIBLE\n");
	    else printf("IMPOSSIBLE\n");
	}

}
