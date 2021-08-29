#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
set<int> s;

int main(){
	int n;cin>>n;
	vector<int> arr(n);
	for(ll i=0;i<n;i++) cin>>arr[i];

	vector<int> dp(n,1);
    int ans=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i]) dp[i]=max(dp[i],dp[j]+1);
            ans=max(ans,dp[i]);
        }
    }
    cout<<ans<<endl;

}
