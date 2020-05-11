#include <bits/stdc++.h>
using namespace std;
void sieve(int limit,vector<int>& p){
	bool mark[limit+1];
	memset(mark,true,sizeof(mark));
	for(int i=2; i <=limit; i++)
		if(mark[i]) {
			p.push_back(i);
			for(int j=i*i;j<=limit;j+=i) mark[j]=false;
			}
}
void segSieve(){
	int low,high; scanf("%d %d",&low,&high);
	int l=floor(sqrt(high))+1;
	vector<int> p;
	sieve(l,p);
	int r=high-low+1;
	bool isPrime[r+1];
	memset(isPrime,true,sizeof(isPrime));
	for(int i=0;i<(int)p.size();i++){
		int f=floor(low/p[i]) * p[i];
		if(f<low) f+=p[i];
		if(f==p[i]) f+=p[i];
		for(int j=f; j<=high; j+=p[i]) isPrime[j-low]=false;
	}
	for(int i=low;i<=high;i++) if(isPrime[i-low] && i>1) printf("%d ",i);
}
int main(){
	int t; scanf("%d",&t);
	while(t--) segSieve();
	return 0;
}
