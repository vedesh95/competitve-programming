#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll tc;cin>>tc;
	while(tc--){
		ll x,y,n;cin>>x>>y>>n;
		cout<<((n-y)/x)*x+y<<endl;
	}
	
}
