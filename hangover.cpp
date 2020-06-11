#include <iostream>
using namespace std;
int main(){
	double x,ans;
	while(1){
		cin>>x;
		if(!x) break;
		ans=0; double k=2;
		while(ans<x){
			ans+=1/k;
			k++;
		}
		cout<<(int)k-2<<" card(s)"<<endl;
	}
}
