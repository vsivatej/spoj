#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k,x,y; scanf("%d%d",&n,&k);
	vector<int> g[n+1];
	queue<int> q;
	int in[n+1],p[n+1];
	
	memset(in,0,sizeof(in));
	memset(p,0,sizeof(p));
	
	for(int i=1;i<=k;i++){
		scanf("%d",&x);
		for(int j=0;j<x;j++){
			scanf("%d",&y);
			in[y]+=1;
			g[i].push_back(y);
		}
	}
		//actual logic
	for(int i=1;i<=n;i++)
		if(in[i]==0) q.push(i);
	
	int ppop=0;
	while(!q.empty()){
		int f=q.front();
		q.pop();
		p[f]=ppop;
		for(int i=0;i<(int)g[f].size();i++){
			int k=g[f][i];
			in[k]-=1;
			if(in[k]==0) q.push(k);
		}
		ppop=f;
	}
	
	for(int i=1;i<=n;i++)
		printf("%d\n",p[i]);
		
}
		
		
	
	
	
	
	
