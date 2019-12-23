#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int t;
	cin>>t;
	for(int q=0;q<t;q++){
		int n;
		cin>>n;
		int a[n];
		
		for(int i=0;i<n;i++)
			cin>>a[i];
		
		sort(a,a+n);
		
		int l=1,max=0;
		for(int i=1;i<n;i++){		//Calculating the max count of a repeating character
			if(a[i]==a[i-1]){
				l++;
			} else {
				if(l>max)
					max=l;
				l=1;
			}
		}
		if(l>max)
			max=l;
		
		cout<<n-max<<endl;  	    //No of characters to be changed
	}
	return 0;
}
