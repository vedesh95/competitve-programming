#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
int main(){
	ll n,target;cin>>n>>target;
	vector<ll> arr(n);
	vector<ll> dp(target+1);
	dp[0]=1;
	for(int i=0;i<n;i++) cin>>arr[i];
	
	for(int j=0;j<n;j++){
		int i=1;
		while(i<=target){
			if(i-arr[j]>=0) dp[i]=(dp[i]+dp[i-arr[j]])%mod;
			i++;
		}
	}
	
	cout<<dp[target];
}
