
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tc;cin>>tc;
	while(tc--)
	{
		int n;cin>>n;
		vector<int > arr(n);
		for(int i=0;i<n;i++) cin>>arr[i];
		sort(arr.begin(),arr.end(),greater<int>());
		for(int i=0;i<n;i++) {cout<<arr[i]<<" ";}
		cout<<endl;
		
	}
}
