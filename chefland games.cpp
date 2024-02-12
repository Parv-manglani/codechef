#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,a,b,c,d;
	cin >> n;
	for(int i=0;i<n;i++){
	    scanf("%d%d%d%d",&a,&b,&c,&d);
	    if(a+b+c+d==0)  printf("IN\n");
	    else  printf("OUT\n");
	}

}
