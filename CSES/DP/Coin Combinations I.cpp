#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
int main(){
	ll n,target;cin>>n>>target;
	vector<ll> arr(n);
	vector<ll> dp(target+1);
	for(int i=0;i<n;i++) {
		cin>>arr[i];
		if(arr[i]<=target) dp[arr[i]]++;
	}
	for(ll i=0;i<=target;i++){
		for(int j=0;j<n;j++){
			if(i-arr[j]>=0) dp[i]=(dp[i]+dp[i-arr[j]])%mod;
		}
	}
	cout<<dp[target]<<endl;
}
