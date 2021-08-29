#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
ll util(vector<ll> &arr,vector<vector<ll> > &dp,ll i,ll sum){
	if(sum==0) return 0;
	ll n=arr.size();
	if(i>=n || sum<0) return INT_MAX;
	if(sum==arr[i]) return 1;
	if(dp[sum][i]!=INT_MAX) return dp[sum][i];
	return dp[sum][i]=min(1+util(arr,dp,i,sum-arr[i]),util(arr,dp,i+1,sum));
}
int main(){
	ll n,target;cin>>n>>target;
	vector<ll> arr(n);
	vector<vector<ll> > dp(target+1,vector<ll>(n,INT_MAX));
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	ll ans=util(arr,dp,0,target);
	if(ans==INT_MAX) cout<<-1<<endl;
	else cout<<ans<<endl;
}
