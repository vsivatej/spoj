#include <bits/stdc++.h>
using namespace std;
int vis[100100];
vector <int> v[100100];
void dfs(int i){
	vis[i]=1;
	for(int j=0;j<(int)v[i].size();j++)
		if(!vis[v[i][j]]) dfs(v[i][j]);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	
	int n,m,c=0,x,y; cin>>n>>m;
	
	for(int k=0;k<m;k++){
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	
	
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			c++;
			dfs(i);
		}
	}
	
	if( c==1 && m==(n-1)) cout<<"YES";
	else cout<<"NO";
}
	
