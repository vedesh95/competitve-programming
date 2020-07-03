#include<bits/stdc++.h>
using namespace std;

# define ll long long 

int main()
{
	ll tc;cin>>tc;
	while(tc--)
	{
	ll n;cin>>n;
	ll k;cin>>k;
	
	vector<ll> arr(n);
	for(ll i=0;i<n;i++) cin>>arr[i];
	
	vector<ll> down;
	for(ll i=0;i<n;i++) down[i]=arr[i]%k;
	
	vector<ll> up;
	for(ll j=0;j<n;j++) up[j]=k-arr[j]%k;

	for(ll i=0;i<n;i++) cout<<down[i]<<" ";
	cout<<endl;
	for(ll j=0;j<n;j++) cout<<up[j]<<" ";
	cout<<endl;
	
	ll i=0,j=n-1;
	ll lefts=0,rights=0;
	while(i<j)
	{
	    
	    if(lefts>=rights+up[j]) {rights=rights+up[j];j--;}
	    else {lefts=lefts+down[i];i++;}
	}
	 
	 cout<<lefts-rights<<endl;
	
	}
}
/*#include<bits/stdc++.h>
using namespace std;

# define ll long long 

int main()
{
	ll tc;cin>>tc;
	while(tc--)
	{
	ll n;cin>>n;
	ll k;cin>>k;
	
	vector<ll> arr(n);
	for(ll i=0;i<n;i++) cin>>arr[i];
	
	sort(arr.begin(),arr.begin()+n-1);
	ll secondlargest=arr[n-3];
	
	  if(secondlargest%k==0)
	  {
	
		ll lefts=0;
		for(ll i=0;i<n-1;i++)
		{
			lefts=lefts+abs(arr[i]%secondlargest);
		
		}
		ll rights=0;
		rights=abs(secondlargest-abs(arr[n-1]%secondlargest));
		cout<<abs(lefts-rights)<<endl;
	  }
	  else
	  {
	  	ll count=0;
	  	for(ll i=0;i<n;i++) count=count+arr[i]%k;
	  	cout<<count<<endl;
	  }
	}
}*/
