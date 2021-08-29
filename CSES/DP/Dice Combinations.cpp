#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
int main(){
	ll n;cin>>n;
	vector<ll> arr(n+1);
	arr[0]=1;
	for(ll i=0;i<=n;i++){
		ll j=1;
		while(i-j>=0 && j<7){
			arr[i]=(arr[i]+arr[i-j])%mod;
			j++;
		}
	}
	cout<<arr[n]<<endl;
}
