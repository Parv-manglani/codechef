#include <bits/stdc++.h>
using namespace std;

int main() {
      int n,a,b,x;
      cin >> n;
      for(int i=0;i<n;i++){
          scanf("%d%d%d",&x,&a,&b);
          if(x<=(2*b)+a) printf("Qualify\n");
          else printf("NotQualify\n");
      }
}
