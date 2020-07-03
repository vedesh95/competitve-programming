#include<bits/stdc++.h>
using namespace std;
# define ll long long
int main()
{
	ll n;cin>>n;
	ll arr[n];
	ll brr[n];
	ll ans[n];

	
	for(ll i=0;i<n;i++) cin>>arr[i];
	for(ll i=0;i<n;i++) cin>>brr[i];
    for(ll i=0;i<n;i++)
    {
    	ans[i]=arr[i]-brr[i];
	}
	sort(ans,ans+n);
	
//	for(ll i=0;i<n;i++)
//    {
//   	cout<<ans[i]<<" ";
//	}cout<<endl;

	ll count=0;
	for(ll i=0;i<n;i++)
	{
		if(ans[i]>0 )
		{
  			// std :: upper_bound 
    		ll upper1 = lower_bound(ans, ans+n, (0-ans[i]+1))-ans;
			count+=i-(upper1);
			//cout<<"ans[i]"<<ans[i]<<" "; 
			//cout<<count<<" ";
		}
	}
	cout<<count<<endl;

 }
