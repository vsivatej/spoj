#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n;
	cin>>n;
	if(n&1) cout<<"NIE";
	else{
		if(ceil(log2(n))==floor(log2(n))) 
			cout<<"TAK";
		else cout<<"NIE";
	}
}
