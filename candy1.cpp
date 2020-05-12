#include <iostream>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	while(1){
		
		int n;
		cin>>n;
		
		if( n == -1 ) break;
		
		int a[n],sum=0,ans=0,temp;
		
		rep(i,0,n) {cin>>a[i];sum+=a[i];}
		temp=sum/n;
		
		if(!(sum%n)){
			rep(i,0,n) if(temp>a[i]) ans+=(temp-a[i]);
			cout<<ans<<"\n";
		}
		else cout<<"-1"<<"\n";
	
	}
}
			
			
		
