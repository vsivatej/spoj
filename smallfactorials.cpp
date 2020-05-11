#include <iostream>
#include <cstdio>
#define MAX 500
using namespace std;
int multiply(int x,int res[],int ar_size);
void fact(int n){
	int res[MAX];
	res[0]=1;
	int ar_size=1;
	for(int x=2;x<=n;++x)
		ar_size=multiply(x,res,ar_size);
	for(int i=ar_size-1;i>=0;i--) printf("%d",res[i]);
	printf("\n");
}

int multiply(int x,int res[],int ar_size){
	int m,carry=0;
	for(int i=0;i<ar_size;++i){
		m=res[i]*x+carry;
		res[i]=m%10;
		carry=m/10;
	}
	while(carry){
		res[ar_size++]=carry%10;
		carry/=10;
	}
	return ar_size;
}
int main(){
	ios_base::sync_with_stdio(false);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		fact(n);
	}
}

