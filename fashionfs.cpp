#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int m[n],w[n],ans=0;;
		for(int i=0;i<n;i++) cin>>m[i];
		for(int i=0;i<n;i++) cin>>w[i];
		sort(m,m+n,greater<int>());
		sort(w,w+n,greater<int>());
		for(int i=0;i<n;i++) ans+=(m[i]*w[i]);
		cout<<ans<<"\n";
	}
}

