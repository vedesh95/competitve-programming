#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
 
ll power(ll x, unsigned int y, int p=mod)
{
    ll res = 1;    
    x = x % p; 
    if (x == 0) return 0; 
 
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
        y = y>>1; 
        x = (x*x) % p;
    }
    return res;
}
int main(){
	ll tc;cin>>tc;
	while(tc--){
		ll n,m;cin>>n>>m;
		cout<<(power(power(2,n)-1,m))%mod<<endl;
	}
}
