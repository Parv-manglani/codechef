#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int a;
	cin >> n;

	for(int i=0;i<n;i++){
		cin >> a;
		if(a<=26)
		printf("aa%c\n",a-2+96);
		if(a>26 && a<=52 && a!=27)
		printf("a%cz\n",a-27+96);
		if(a==27)
		printf("aay\n");
		if(a>52)
		printf("%czz\n",a-52+96);
	}
	
	}
