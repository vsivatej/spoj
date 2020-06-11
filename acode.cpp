#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
long long dp[5000];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	while(1){
		string s; cin>>s;
		if(s[0]=='0') return 0;
		memset(dp,0,sizeof(dp));
		int l=s.size(),i=1; dp[0]=1;
		while(i<l){
			int t=(s[i-1]-'0') * 10; t+=(s[i]-'0');
			if(s[i]-'0') dp[i]=dp[i-1];
			if( t>9 && t<27 ) dp[i]+=dp[i-2<0?0:i-2];
			i++;
		}
		
		cout<<dp[l-1]<<endl;
	
	}
}
