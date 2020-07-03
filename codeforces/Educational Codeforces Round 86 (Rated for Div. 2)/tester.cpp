
 #include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()

{
	ll tc;cin>>tc;
	while(tc--)
	{
        ll a,b,q;cin>>a>>b>>q;
        while(q--)
        {
        	ll p,q;cin>>p>>q;
        	ll count=0;
        	for(ll i=p;i<=q;i++)
        	{
        		if(((i%a)%b)==((i%b)%a)) {cout<<i<<" ";count++;}
			}
			//cout<<count<<endl;
		}
        
	}
}

