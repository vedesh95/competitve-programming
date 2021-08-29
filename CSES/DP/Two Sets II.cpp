#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

ll util(ll i,ll sum,vector<vector<ll> > &dp){
//	cout<<i<<" ";
	if(i==0 && sum==0) return 1;
	if(i<=0) return 0;
	if(dp[i][sum]!=-1) return dp[i][sum];
//	return dp[i][sum]=(max(util(arr,i-1,sum-arr[i],dp),util(arr,i-1,sum,dp)))%mod;
	int temp=0;
	if(sum>=i) temp=util(i-1,sum-i,dp);
	if(i==dp.size()-1) return temp+util(i-1,sum,dp);
	return dp[i][sum]=(temp+util(i-1,sum,dp))%mod;

}
int main(){
		ll n;cin>>n;
		ll sum=n*(n+1)/2;
	
		if(sum%2==1){
			cout<<0<<endl;
		}else{
			sum=sum/2;
			vector<vector<ll> > dp(n+1,vector<ll>(sum+1,-1));
			cout<<util(n,sum,dp)/2;
//			ll temp=util(n,sum,dp);
////			if((temp+mod)%mod!=temp) cout<<((temp+mod)/2)%mod<<endl;		
////			else cout<<temp/2<<endl;
//			cout<<((temp+mod)/2)%mod<<endl;		
//			cout<<temp/2<<endl;
//			cout<<((temp+mod)%mod)/2;
		}
	
	
    
}
