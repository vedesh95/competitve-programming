#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
 
ll util(vector<ll> &arr,ll i,ll j,vector<vector<ll> > &dp){
	ll n=arr.size();
	if(i<0 || j<0 || i>=n || j>=n || i>j) return 0;
	if(dp[i][j]!=-1) return dp[i][j];
	return dp[i][j]=max(arr[i]+min(util(arr,i+2,j,dp),util(arr,i+1,j-1,dp)),arr[j]+min(util(arr,i,j-2,dp),util(arr,i+1,j-1,dp)));
}
 
int main(){
	ll n;cin>>n;
	vector<ll> arr(n);
	for(ll i=0;i<n;i++) cin>>arr[i];
	
	vector<vector<ll> > dp(n,vector<ll> (n,-1));
    cout<<util(arr,0,n-1,dp)<<endl;
}
