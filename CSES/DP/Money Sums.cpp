#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
set<int> s;

int util(vector<int> &arr,int i,int sum,vector<vector<int> > &dp){
	int n=arr.size();
	if(i==-1) {
		s.insert(sum);
		return sum;
	}
	if(dp[i][sum]!=-1) return dp[i][sum];
	return dp[i][sum]=util(arr,i-1,sum+arr[i],dp)+util(arr,i-1,sum,dp);
}
int main(){
	int n;cin>>n;
	vector<int> arr(n);
	int sum=0;
	for(ll i=0;i<n;i++) {cin>>arr[i];sum+=arr[i];}
	s.clear();
	vector<vector<int> > dp(n,vector<int>(sum+1,-1));
	util(arr,n-1,0,dp);
	
//	for(ll i=0;i<n;i++) cout<<dp[i]<<" ";
//	cout<<endl;
	s.erase(0);
	cout<<s.size()<<endl;
	set<int> :: iterator it;
	for(it=s.begin();it!=s.end();it++) cout<<*it<<" ";
	cout<<endl;
}
