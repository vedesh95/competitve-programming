#include<bits/stdc++.h>
# define ll long long
using namespace std;

int main()
{
	ll tc;cin>>tc;
	while(tc--)
	{
		ll n;cin>>n;
		vector<ll >arr(n);
		ll ans=0;
		for(ll i=0;i<n;i++) cin>>arr[i];
		for(ll i=0;i<n;i++)
		{
			ll maxnum=arr[i];ll tojump=i;
			for(ll j=i+1;j<n;j++)
			{
				if(arr[j]>0 && arr[i]<0) break;
				if(arr[j]<0 && arr[i]>0) break;
				if(arr[j]>maxnum) {maxnum=arr[j];}
				tojump=j;
 				
 			}
 			
			 ans=ans+maxnum;
 			 i=tojump;
 			
		 } 
		 cout<<ans<<endl;
	}	
}
