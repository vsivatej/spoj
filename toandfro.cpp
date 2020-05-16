#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	while(1){
		int c,k=0; cin>>c;
		if(c==0) return 0;
		string s; cin>>s;
		int r=s.size()/c;
		char m[r][c];
		for(int i=0;i<r;i++)
			if(i%2)
				for(int j=c-1;j>=0;j--)
					m[i][j]=s[k++];
			
			else
				for(int j=0;j<c;j++)
					m[i][j]=s[k++];
		for(int i=0;i<c;i++)
			for(int j=0;j<r;j++)
				cout<<m[j][i];
		cout<<"\n";
	}
}
				
			
