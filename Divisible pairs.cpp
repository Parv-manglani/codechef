#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t;
	int x,y;
	int count=0;
	cin >> n;
	
	int a[t];
	for(int i=0;i<n;i++){
		scanf("%d%d%d",&t,&x,&y);
		for(int i=0;i<t;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<t;i++){
			for(int j=i+1;j<t;j++){
				if((a[i]+a[j])%x==0 && (a[i]-a[j])%y==0)
				count++;
			}
		}
		printf("%d",count);
		count=0;
	}
}