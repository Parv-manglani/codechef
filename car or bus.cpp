#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x,y;
	cin >> n;
	for(int i=0;i<n;i++){
	    scanf("%d%d",&x,&y);
	    if(x<y) printf("BIKE\n");
	    else if(x==y) printf("SAME\n");
	    else printf("CAR\n");
	}

}
