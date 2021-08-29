#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
vector<int> getvec(int n){
	vector<int> ans;
	while(n){
		ans.push_back(n%10);
		n=n/10;
	}
	return ans;
}
int util(int n,vector<int> &dp){
	if(n==0) return 0;
	if(n<0) return INT_MAX-1;
	
	if(dp[n]!=-1) return dp[n];
 	
	vector<int> digit=getvec(n);
	int ans=INT_MAX;
	
	for(int i=0;i<digit.size();i++){
		if(digit[i]==0) continue;
		ans=min(ans,1+util(n-digit[i],dp));
	}
	return dp[n]=ans;
}
int main(){
	ll n;cin>>n;
	vector<int> dp(n+1,-1);
	cout<<util(n,dp)<<endl;
}
