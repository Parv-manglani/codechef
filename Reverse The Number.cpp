#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,a,k=0;
	int b[100];
	cin >> n;
	for(int i=0;i<n;i++){
	    scanf("%d",&a);
	    for(int j=a;j!=0;j/=10){
            b[k]=j%10;
            k++;
	}
	
	for(int i=0;i<k;i++){
		if(b[i]==0){
			for(int j=0;j<i;j++){
				if(b[j]!=0){
				printf("0");
				break;}
				else continue;
			}
			}
			else printf("%d",b[i]);  
		}
	printf("\n");
	k=0;
	}
}
