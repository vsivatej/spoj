#include <bits/stdc++.h>
using namespace std;
int prec(char x){
	if(x=='^') return 3;
	else if(x=='*' || x=='/') return 2;
	else if(x=='+' || x=='-') return 1;
	else return -1;
}
void rpn(string in){
	stack<int> s; s.push('N');
	int l=in.length();
	string o;
	for(int i=0;i<l;i++){
		if(in[i]>='a' && in[i]<='z') o+=in[i];
		else if(in[i]=='(') s.push('(');
		else if(in[i]==')'){
			while(s.top()!='N' && s.top()!='('){
				char c=s.top();
				s.pop();
				o+=c;
			}
			if(s.top()=='('){
				s.pop();
			}
		}
		else{
			while(s.top()!='N' && prec(in[i])<=prec(s.top()))
			{
				char c=s.top();
				s.pop();
				o+=c;
			}
			s.push(in[i]);
		}
	}	
		while(s.top()!='N'){
			char c=s.top();
			s.pop();
			o+=c;
		}
		cout<<o<<"\n";
}
int main(){
	ios_base::sync_with_stdio(false);
	int t; cin>>t;
	string in;
	while(t--){
		cin>>in;
		rpn(in);
	}
}
