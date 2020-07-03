#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
	ll tc;cin>>tc;
	while(tc--)
	{
		ll n,k;cin>>n>>k;
		vector<ll> arr1(n);
		vector<ll> arr2(n);
		for(int i=0;i<n;i++)
		{
			cin>>arr1[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>arr2[i];
		}
		
		sort(arr1.begin(),arr1.end());
		sort(arr2.begin(),arr2.end());
		for(int i=0;i<k;i++)
		{
			if(arr1[i]<arr2[n-1-i]) arr1[i]=arr2[n-1-i];
		}
		ll sum=0;
		for(ll i=0;i<n;i++)
		{
			sum=sum+arr1[i];
		}
		cout<<sum<<endl;
 	}
}
