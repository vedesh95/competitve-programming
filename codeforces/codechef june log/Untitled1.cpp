#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() 
{
	// your code goes here
	ll tc;cin>>tc;
	while(tc--)
	{
	    ll n;cin>>n;
 	   vector<ll> arr(n);
	    
	    for(ll i=0;i<n;i++) cin>>arr[i];
	    
	    ll r5=0,r10=0,r15=0;
	    bool flag=0;
	    for(ll i=0;i<n;i++)
	    {
	        ll amt=arr[i];
	        r15+=amt/15;amt=amt%15;r10+=amt/10;amt=amt%10;r5+=amt/5;amt=amt%5;
	        amt=arr[i]-5;
	        r15-=amt/15;amt=amt%15;r10-=amt/10;amt=amt%10;r5-=amt/5;amt=amt%5;
	        if(r5<0 || r10<0 || r15<0 ) {flag=1;}
	        cout<<"r5="<<r5<<" r10="<<r10<<" r15="<<r15<<endl;
	        if(flag) {break;}
	    }
	    
	    if(flag) cout<<"NO"<<endl;
	    else cout<<"YES"<<endl;
	}
}
