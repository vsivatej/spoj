#include <bits/stdc++.h>
using namespace std;
map<int,long long> m;
long long dollars(int n){
	if(n<12) return n;
	if(m.count(n)) return m[n];
	m[n]=dollars(n/2)+dollars(n/3)+dollars(n/4);
	return m[n];
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	while(scanf("%d",&n))
		printf("%lld\n",dollars(n));
}
