#include <iostream>
#define ll long long
using namespace std;
void exp(){
	ll a,b,m=10,res=1; cin>>a>>b;
	while(b){
		if(b%2){
			res=res*a%m;
			b--;
		}
		else{
			a=a*a%m;
			b/=2;
		}
	}
	cout<<res<<"\n";
}
	
int main(){
	int t; cin>>t;
	while(t--) exp();
}
