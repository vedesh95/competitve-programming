#include<bits/stdc++.h>
using namespace std;


int main()
{
  while(1)
  {
  
	long n;cin>>n;
	if(n==0) break;
	vector<long > arr(n);
	for(long i=0;i<n;i++) cin>>arr[i];
	
	long ans=n*(n-1)*(n-2)/6;
	sort(arr.begin(),arr.end());
	for(long i=n-1;i>=2;i--)
	{
		if(  (arr[i-2]+arr[i-1]>=arr[i]) && (arr[i-1]+arr[i]>=arr[i-2]) && (arr[i]+arr[i-2]>=arr[i-1])  )ans--;
		
	}
	cout<<ans<<endl;
  }
	
}
