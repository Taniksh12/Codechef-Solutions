#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int n,h,y1,y2,l;
		cin>>n>>h>>y1>>y2>>l;
		int br=0,str=l;
		for(int i=0;i<n;i++){
			int t,x;
			cin>>t>>x;
			if(str>0){
			if(t==1){
				if(h-y1>x){
					str--;
				} 
				 br++;
			} else {
				if(y2<x){
					str--;
				} 
				 br++;
			}
			} 
		}
		if(str>0)
			cout<<br<<endl;
		else 
			cout<<--br<<endl;
	}
	return 0;
}
