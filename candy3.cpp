#include <iostream>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		long long n,tc=0,tmp,x;cin>>n;tmp=n;
		
		while(tmp--){
			cin>>x;
			tc=(tc+x)%n;
		}
		if(tc) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
		
	}
}
