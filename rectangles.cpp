#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,ans,c=0;
	cin>>n;
	ans=floor(sqrt(n));
	for(int i=1;i<=floor(sqrt(n));i++)
		for(int j=i+1;i*j<=n;j++)
			c++;
	ans+=c;
	cout<<ans<<endl;
}
