#include <bits/stdc++.h>
# define ll long long
using namespace std;


bool  strdcr(vector<ll> arr)
{
    bool flag1=1;
    for(ll i=arr.size()-1;i>=0;i--)
    {
        if(arr[i]<arr[i+1]) flag1=0;
    }
    return flag1;
}

bool spc1(vector<ll> arr)
{
	ll n=arr.size();
	ll mid;
	if(n%2==0) mid=n/2;
	else mid=n/2+1;
	bool flag1=1,flag2=1;
	for(ll i=0;i<mid;i++)
	{
		if(arr[i]>arr[i+1]) flag1=0;
		
	}
	for(ll i=mid;i<n;i++)
	{
		if(arr[i]<arr[i+1]) flag2=0;
		
	}
	return flag1&&flag2;
}


bool spc2(vector<ll> arr)
{
	ll n=arr.size();
	ll mid;
	if(n%2==0) mid=n/2;
	else mid=n/2+1;
	bool flag1=1,flag2=1;
	for(ll i=0;i<mid;i++)
	{
		if(arr[i]<arr[i+1]) flag1=0;
		
	}
	for(ll i=mid;i<n;i++)
	{
		if(arr[i]>arr[i+1]) flag2=0;
		
	}
	return flag1&&flag2;
}
int main() 
{
	// your code goes here
	ll tc;cin>>tc;
	while(tc--)
	{
	   ll n;cin>>n;
	   vector<ll> arr(n);
	   for(ll i=0;i<n;i++) cin>>arr[i];
	   ll min=0,count=0;
	   for(ll i=n-1;i>=0;i--) 
	   {
	       if(arr[i]>min) {count++;min=arr[i];}
	   }
	   if(spc1(arr)|| spc2(arr)) {cout<<1<<endl;continue;}
	   if(count>=2) cout<<2<<endl;
	   else cout<<1<<endl;
	   
	   
	   
	   
	}
}
