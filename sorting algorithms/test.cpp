#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tc;cin>>tc;
  while(tc--){	
	int n,k;cin>>n>>k;
	
	vector<long> arr;
	for(int i=0;i<n;i++)
	{
	    long ins;cin>>ins;
	    arr.push_back(ins);
	}
	
	for(int i=0;i<k-1;i++)
	{
	    arr.push_back(arr[i]);
	}
	
    long count=INT_MAX;
	
	for(int i=0;i<arr.size();i++)
	{
	    	long min=INT_MAX;
	        long max=INT_MIN;
	    
	    for(int j=i;j<k;j++)
	    {
	        if(arr[j]>max) {max=arr[i];}
	        if(arr[j]<min) {min=arr[i];}
	    }
	    cout<<"max="<<max<<" "<<"min="<<min<<endl;
	    if( (max-min)<count ) count=max-min;
	}
	cout<<count<<endl;
  }
	
	return 0;
}
