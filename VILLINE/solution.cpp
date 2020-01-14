#include<iostream>
using namespace std;
int main(){
	
	int n,m,c;
	cin>>n>>m>>c;
	int top=0,bottom=0;
	for(int i=0;i<n;i++){
		int x,y,p;
		cin>>x>>y>>p;
		int d=y-m*x-c;
		if(d<0)
			bottom+=p;
		else top+=p;
	}
	cout<<max(top,bottom);
	return 0;
}
