#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
 
int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,no_dest;
		cin>>n>>no_dest;
		int arr[n];
		int dest[no_dest];
		for(int i=0;i<n;i++) cin>>arr[i];
		for(int i=0;i<no_dest;i++) cin>>dest[i];
		
		int dp[n];
		for(int i=0;i<n;i++) dp[i]=INT_MAX;
		dp[0]=0;
//		for(int i=0;i<n;i++) cout<<dp[i]<<" ";
		int c=INT_MAX;bool f=0;
		for(int i=0;i<n;i++){
			if(arr[i]==1) c=0,f=1;
			else if(f==1) c++;
			dp[i]=min(dp[i],c);
//			cout<<c<<" "<<dp[i]<<" ";
		}
		c=INT_MAX;f=0;
		for(int i=n-1;i>=0;i--){
			if(arr[i]==2) c=0,f=1;
			else if(f==1) c++;
			dp[i]=min(dp[i],c);
		}
		for(int i=0;i<n;i++) cout<<dp[i]<<" ";
		for(int i=0;i<no_dest;i++){
			if(dp[dest[i]-1]==INT_MAX) cout<<-1<<" ";
			else cout<<dp[dest[i]-1]<<" ";
		}
		cout<<endl;
	}
}
