#include<bits/stdc++.h>
#define ll long long
using namespace std;
int  main()
{
	ll tc;cin>>tc;
	while(tc--)
	{
		ll n,m;cin>>n>>m;
		if(n==1) cout<<"0"<<endl;
		if(n==2) cout<<m<<endl;
		if(n>=3) cout<<m*2<<endl;
		
	}
}
