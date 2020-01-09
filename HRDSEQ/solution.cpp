#include<iostream>
using namespace std;
int main() {
	
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int a[n];
		a[0]=0;
		for(int i=1;i<n;i++){			//Forming the sequence
			int x=a[i-1];
			int j;
			for(j=i-2;j>=0;j--){
				if(a[j]==x)
					break;
			}
			if(j>=0)
				a[i]=i-1-j;
			else 
				a[i]=0;
		}
		int count =0;
		for(int i=0;i<n;i++){			//Calculating the occurence of the required character
			if(a[i]==a[n-1])
				count++;
		}
		cout<<count<<endl;
	}
	return 0;
}
