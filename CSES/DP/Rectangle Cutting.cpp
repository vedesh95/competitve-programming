#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
set<int> s;

int main(){
	int m,n;cin>>m>>n;
	vector<vector<ll> > dp(m+1,vector<ll> (n+1,INT_MAX));
	for(int i=1;i<=min(m,n);i++) dp[i][i]=0;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			for(int k=1;k<=i;k++){
				dp[i][j]=min(dp[i][j],(1+dp[k][j]+dp[i-k][j])%mod);
			}
			for(int k=1;k<=j;k++){
				dp[i][j]=min(dp[i][j],(1+dp[i][k]+dp[i][j-k])%mod);
			}
			
		}
	}
//	for(int i=1;i<=m;i++){
//		for(int j=1;j<=n;j++){
//			cout<<dp[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	cout<<dp[m][n];

}
