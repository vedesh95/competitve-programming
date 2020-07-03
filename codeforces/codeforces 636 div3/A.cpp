#include<bits/stdc++.h>
# define ll long long
using namespace std;

int main()
{
	ll tc;cin>>tc;
	while(tc--)
	{
		ll x;cin>>x;
		if((x/2)%2!=0) {cout<<"NO"<<endl;continue;}
		
		else
		{
			ll last=2;
			cout<<"YES"<<endl;
			for(ll i=0;i<x/2;i++)
			{cout<<last<<" ";last=last+2;}
			
			last=1;
			ll sum=0;
			for(ll i=0;i<x/2-1;i++)
			{cout<<last<<" ";sum=sum+last;last=last+2;}
			
			x=x/2;
			cout<<x*(x+1)-sum<<endl;
			
			
			
		}
	}	
}
