#include <iostream>
using namespace std;

int main() {
	
	while(1){
		int n; cin>>n;
		if(n==0) return 0;
		int ans=(n*(n+1)/2)*(2*n+1)/3;
		cout<<ans<<'\n';
	}
	
}
