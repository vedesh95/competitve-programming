#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll m;
#define mod 1000000007


//ll util(vector<ll> &arr,ll i,ll ele,vector<vector<ll> > &dp){
////	cout<<i<<" ";
//
//	ll n=arr.size();
//	if(i==0){
//		if(arr[i]!=0 && arr[i]==ele) return dp[i][ele]=1;
//		else if(arr[i]!=0) return dp[i][ele]=0;
//		return dp[i][ele]=1; 
//	}
//	if(i<0 || ele<=0 || ele>m) return 0;
//	
//	if(dp[i][ele]!=-1) return dp[i][ele];
//	if(arr[i]==0){
//		for(int k=1;k<=m;k++){
//			dp[i][k]=((util(arr,i-1,k-1,dp)+util(arr,i-1,k,dp))%mod+util(arr,i-1,k+1,dp))%mod;
//		}
//		return dp[i][ele];
//	}
//	if(ele==arr[i]) return dp[i][ele]=((util(arr,i-1,arr[i]-1,dp)+util(arr,i-1,arr[i],dp))%mod+util(arr,i-1,arr[i]+1,dp))%mod;
//	return dp[i][ele]=0;
//}
 
int main(){

		ll n;cin>>n>>m;
		vector<ll> arr(n);
		for(ll i=0;i<n;i++) cin>>arr[i];
		
		vector<vector<ll> > dp(n,vector<ll> (m+1,0));
		if(arr[0]==0){
			for(int i=1;i<=m;i++) dp[0][i]=1;
		}
		if(arr[0]!=0){
			dp[0][arr[0]]=1;
		}
		for(int i=1;i<n;i++){
			if(arr[i]==0){
				for(int j=1;j<=m;j++){
//					cout<<dp[i][j]<<" ";
					dp[i][j]=(dp[i-1][j-1] + dp[i-1][j])%mod;
					if(j+1<=m) dp[i][j]=(dp[i][j]+dp[i-1][j+1])%mod;
				}
//				cout<<endl;
			}else{
				dp[i][arr[i]]=(dp[i-1][arr[i]-1] + dp[i-1][arr[i]])%mod;
				if(arr[i]+1<=m) dp[i][arr[i]]=(dp[i][arr[i]]+dp[i-1][arr[i]+1])%mod;
			}
		}
		
//		util(arr,n-1,arr[n-1],dp);
//		for(int i=0;i<n;i++){
//		    for(int j=0;j<=m;j++) cout<<dp[i][j]<<" ";
//		    cout<<endl;
//		}
		
	    if(arr[n-1]!=0) cout<<dp[n-1][arr[n-1]];
	    else{
	    	ll res=0;
	    	for(int k=1;k<=m;k++) res=(res+dp[n-1][k])%mod;
	    	cout<<res<<endl;
		}
	
}
//    for(int i=0;i<n;i++){
//    	for(int j=0;j<=m;j++) cout<<dp[i][j]<<" ";
//    	cout<<endl;
//	}
