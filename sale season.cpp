#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a;
	cin >> n;
	for(int i=0;i<n;i++){
	    scanf("%d",&a);
	    if(a<=100) printf("%d\n",a);
	    else if(a>100 && a<=1000)  printf("%d\n",a-25);
	    else if(a>1000 && a<=5000) printf("%d\n",a-100);
	    else  printf("%d\n",a-500);
	}

}