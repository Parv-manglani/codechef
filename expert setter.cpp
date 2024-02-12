#include <bits/stdc++.h>
using namespace std;

int main() {
	float n,a,b;
	cin >> n;
	for(int i=0;i<n;i++){
	    scanf("%f%f",&a,&b);
	    if((a/2)<=b)  printf("YES\n");
	    else printf("NO\n");
	}

}
