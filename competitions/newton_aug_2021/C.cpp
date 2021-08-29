#include<bits/stdc++.h>
using namespace std;
#define int unsigned long long int
#define INT_MAX 1e16

void util(vector<vector<pair<int,int> > > &arr,vector<int> &dist){
	int n=arr.size();
    priority_queue<pair<int,pair<int,int> >,vector<pair<int,pair<int,int> > >,greater<pair<int,pair<int,int> > > > pq;
    pq.push(make_pair(0,make_pair(0,1)));
    dist[0]=0;
    while(!pq.empty()){
        int d=pq.top().first,i=pq.top().second.first,w=pq.top().second.second;
        pq.pop();
        for(int j=0;j<arr[i].size();j++){
            int end=arr[i][j].first,edgeweight=arr[i][j].second;
            if(dist[i]+w*edgeweight<dist[end]){
                dist[end]=dist[i]+w*edgeweight;
                pq.push(make_pair(dist[end],make_pair(end,w+1)));
            }
        }
    }
}
int32_t main(){
    int n,m;cin>>n>>m;
    vector<vector<pair<int,int> > > arr(n);
    vector<int> dp(n,INT_MAX);
    for(int k=0;k<m;k++){
    	int i,j,cost;cin>>i>>j>>cost;
    	arr[i-1].push_back(make_pair(j-1,cost));
    	arr[j-1].push_back(make_pair(i-1,cost));
	}
	dp[0]=0;
	util(arr,dp);
	cout<<0<<endl;
	for(int i=1;i<n;i++){
		if(dp[i]!=INT_MAX) cout<<dp[i]<<endl;
		else cout<<"-1"<<endl;
	}
	
}
