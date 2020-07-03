
 
 
 
 #include<bits/stdc++.h>
#define ll long long
using namespace std;


ll gcd(ll a, ll b){ 
    if (a == 0) 
        return b;  
    return gcd(b % a, a);  
 } 
  
   
// Function to return LCM of two numbers  
  ll lcm(ll a, ll b)  
 {  
    return (a*b)/gcd(a, b);  
 }  
int main()

{
	ll tc;cin>>tc;
	while(tc--)
	{
        ll a,b,t;cin>>a>>b>>t;
        while(t--)
        {
        	ll p,q;cin>>p>>q;
        	ll lc=lcm(a,b);
        	cout<<q-p+1-((q-p)/lc*b+q%lc+p-p%lc)<<endl;

			//cout<<count<<endl;
		}
        
	}
}
