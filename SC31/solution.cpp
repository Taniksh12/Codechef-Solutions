#include<iostream>
#include<string>
using namespace std;
int main() {
	
	int t;
	cin>>t;
	
	while(t--) {
		int n;
		cin>>n;
		string s[n];
		for(int i=0;i<n;i++){				//Taking input strings
			string temp;
			cin>>temp;
			s[i]=temp;
		}
		char result[10];
		for(int j=0;j<10;j++){			//Logic is to find AND of chars down the column
			char temp = '0';
			for(int i=0;i<n;i++){
				if(s[i][j]=='0' && temp=='0')
					temp = '0';
				else if(s[i][j]=='0' && temp=='1')
					temp = '1';
				else if(s[i][j]=='1' && temp=='0')
					temp = '1';
				else if(s[i][j]=='1' && temp=='1')
					temp = '0';
			}
			result[j]=temp;
		}
		int count = 0;
		for(int i=0;i<10;i++){			//Finding the no. of weapons left
			if(result[i]=='1')
				count++;
		}
		cout<<count<<endl;
	}
	return 0;
	
}
