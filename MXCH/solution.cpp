#include<iostream>
using namespace std;
int main() {
	
	int t;
	cin>>t;
	while(t--) {
		int n,k;
		cin>>n>>k;
		int a[n], index=0, t=n-k;
		while(t<=n){				//placing heights such that there are only k moves
			a[index]=t;
			t++;
			index++;
		}
		t=n-k;
		for(int i=1;i<t;i++){		//filling all remaining heights
			a[index]=i;
			index++;
		}
		for(int i=0;i<index;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}
