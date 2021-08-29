#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int util(vector<vector<char> > &arr,int i,int j,vector<vector<int> > &dp){
	int n=arr.size();
	if(i<0 || j<0 || i>=n || j>=n) return 0;
	if(arr[i][j]=='*') return dp[i][j]=0;
	if(i==0 && j==0) return dp[i][j]=1;
	if(dp[i][j]!=-1) return dp[i][j];
	return dp[i][j]=(util(arr,i-1,j,dp)+util(arr,i,j-1,dp))%mod;
}
int main(){
	int n;cin>>n;
	vector<vector<char> > arr(n,vector<char>(n));
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	vector<vector<int> > dp(n,vector<int>(n,-1));
	cout<<util(arr,n-1,n-1,dp)<<endl;
}
