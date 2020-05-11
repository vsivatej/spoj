#include <bits/stdc++.h>
using namespace std;
int rev(int i){
	int rem,rnum=0;
	while(i>0){
		rem=i%10;
		rnum=rnum*10+rem;
		i/=10;
	}
	return rnum;
}
		
int main(){
	int t; scanf("%d",&t);
	while(t--){
		int x,y,rx,ry; scanf("%d%d",&x,&y);
		rx=rev(x);
		ry=rev(y);
		printf("%d\n",rev(rx+ry));
	}
}
