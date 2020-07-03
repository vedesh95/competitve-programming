#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int tc;cin>>tc;
	while(tc--)
	{
	    int n;cin>>n;
	    vector<int> arr(n);
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    for(int i=1;i<n;i++)
	        arr[i]=(arr[i]^arr[i-1]);
	    cout<<arr[n-1]<<endl;
	    
	}
	return 0;
}
