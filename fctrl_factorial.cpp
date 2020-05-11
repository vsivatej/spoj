#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int t; cin>>t;
	long long n,z;
	while(t--){
		z=0;
		cin>>n;
		for(int i=5;n/i>=1;i*=5)
			z+=n/i;
		cout<<z<<"\n";
	}
}
