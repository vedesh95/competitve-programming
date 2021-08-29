#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

ll util(int n,int m,vector<vector<ll> > &dp){
	if(n==2 && m==1) return 1;
	if(n==1 && m==2) return 1;
	if(n==0 && m==0) return 1;
	if(n<=0 || m<=0) return 0;
	if(dp[n][m]!=-1) return dp[n][m];
  	return dp[n][m]=(util(n,m-2,dp)+util(n-1,m,dp)+util(n-2,m,dp)+util(n,m-1,dp)-util(n-1,m-2,dp)-util(n-2,m-1,dp));
}
int main(){
	
	ll n,m;cin>>n>>m;
	vector<vector<ll> > dp(n+1,vector<ll>(m+1,-1));
	cout<<util(n,m,dp);
	
	
    
}
