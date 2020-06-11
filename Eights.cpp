#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin>>t;
	while(t--){
		long long k; cin>>k;
		cout<<(192+(k-1)*250)<<"\n";
	}
}
