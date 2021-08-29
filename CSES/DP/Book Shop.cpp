#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,sum;cin>>n>>sum;
	vector<int> price(n,0);
	vector<int> pages(n,0);
	for(int i=0;i<n;i++) cin>>price[i];
	for(int i=0;i<n;i++) cin>>pages[i];
	vector<vector<int> > dp(n+1,vector<int> (sum+1,0));
	int ans=0;
	for(int i=1;i<=n;i++){
		for(int j=sum;j>=1;j--){
			if(j<price[i-1]) dp[i][j]=dp[i-1][j];
			else dp[i][j]=max(pages[i-1]+dp[i-1][j-price[i-1]],dp[i-1][j]);
			ans=max(ans,dp[i][j]);
		}
	}
	cout<<ans<<endl;
}
