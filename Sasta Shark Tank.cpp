#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,a,b,x,y;
	cin >> n;
	for(int i=0;i<n;i++){
	    scanf("%d%d",&a,&b);
	    x=10*a;
	    y=5*b;
	    if(x==y) printf("ANY\n");
	    else if(x>y) printf("FIRST\n");
	    else printf("SECOND\n");
	}

}
