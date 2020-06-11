#include <bits/stdc++.h>
using namespace std;
int n,c;

int f(int m,int arr[]){
	int cowsplaced=1,lastpos=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]-lastpos>=m){
		if(++cowsplaced==c) return 1;
		lastpos=arr[i];
	}
	}
	return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin>>t;
	while(t--){
		cin>>n>>c;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		sort(arr,arr+n);
		int s=0,end=arr[n-1]-arr[0]+1,mid;
		while(end-s>1){
			mid=(s+end)>>1;
			(f(mid,arr)?s:end)=mid;
		}
		cout<<s<<"\n";
	}
}
