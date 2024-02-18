#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x;
	cin >> n;
	for(int i=0;i<n;i++){
	    cin >> x;
	    if(x%4==0) printf("Good\n");
	    else printf("Not Good\n");
	}
}
