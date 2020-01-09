#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		cout<<a[0]<<endl;			//minimum element would be the maximum modulus result
	}
	return 0;
}
