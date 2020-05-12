#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a,b,c;
	while(1){
		cin>>a>>b>>c;
		
		if(!a && !b && !c) break;
		
		if( b-a == c-b) 
			cout<<"AP "<<c+(c-b)<<"\n";	
		else 
			cout<<"GP "<<c*(c/b)<<"\n";
		
		
	}
}
	
