#include <bits/stdc++.h>
using namespace std;
vector<int> v[6];
vector<int> a;
bool visit[6];
int n;
void dfs(int k){
	visit[k]=true;
	for(int j=0;j<(int)v[k].size();++j) if(!visit[v[k][j]]) dfs(v[k][j]);
	a.push_back(k);
}
		
void tSort(int m){
	for(int i=0;i<n;++i) if(!visit[i]) dfs(i);
	for(int p=a.size()-1;p>=0;--p) cout<<a[p]<<" ";
}
int main(){
	int e; cin>>n>>e;
	
	for(int i=0;i<e;i++){
		int x,y; cin>>x>>y;
		v[x].push_back(y);
	}
	
	memset(visit,false,sizeof(visit));
	tSort(0);
}
