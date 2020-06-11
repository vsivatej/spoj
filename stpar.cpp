#include <iostream>
#include <stack>
using namespace std;
int main(){
	int n,x,e=1,flag=0;
	stack<int> s;
	cin>>n;
	if(n==0) return 0;
	for(int i=0;i<n;i++){
		cin>>x;
		if(x==e){
			e++;
			while(!s.empty() && s.top()==e){
				s.pop();
				e++;
			}
		}
		else s.push(x);
	}
	while(!s.empty() && e<=n){
		if(s.top()==e){
			s.pop();
			e++;
		}
		else {flag=1;break;}
	}	
	if(flag) cout<<"no"<<"\n";
	else cout<<"yes"<<"\n";
	main();	
}
