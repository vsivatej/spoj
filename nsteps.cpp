#include <cstdio>
using namespace std;
int main(){
	int n; scanf("%d",&n);
	while(n--){
		int x,y; scanf("%d%d",&x,&y);
		int dif=x-y,flag=x%2;
		if(dif==0 || dif==2){
			if(flag) printf("%d\n",(x+y-1));
			else printf("%d\n",x+y);
		}
		else printf("No Number\n");	
	}
}
