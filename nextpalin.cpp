#include <bits/stdc++.h>
using namespace std;

int a9(string s){
	for(int i=0;i<(long long)s.size();i++)
		if(s[i]!='9') return 0;
	return 1;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	int t; cin>>t;
	while(t--){
		
		cin>>s;
		int len=s.length();
		char ans[len+3];
		if(a9(s)){
			ans[0]='1';
			for(int i=1;i<len;i++)
				ans[i]='0';
			ans[len]='1';
			ans[len+1]='\0';
			cout<<ans<<endl;
		}
		else{
			int i,j,num,c=1;
			i=len/2;
			j=i;
			if(len%2==0) i-=1;
			while(i>=0 && s[i]==s[j]){
				i--;j++;
			}
			if(i<0 || s[i]<s[j]){
				i=len/2;
				j=i;
				if(len%2==0) i-=1;
				while(i>=0){
					num=(s[i]-'0')+c;
					c=num/10;
					s[i]=(num%10)+'0';
					s[j]=s[i];
					i--;j++;
				}
			}
			else{
				while(i>=0){
					s[j]=s[i];
					i--;j++;
				}
			}
			cout<<s<<endl;
		}
		
	}
}
			
