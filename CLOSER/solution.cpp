#include <iostream>
#include<vector> 
#include<algorithm>
using namespace std;
int main() {
	// your code goes here
	int n,k;
	cin>>n>>k;
	vector<pair<int,int>> v;
	for(int i=0;i<k;i++){
	    int temp;
	    cin>>temp;
	    pair<int,int> p;
	    p.first=n-temp;
	    p.second=temp;
	    v.push_back(p);
	}
	sort(v.begin(),v.end());
	cout<<v[0].second;
	return 0;
}

