#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    int tc;cin>>tc;
    while(tc--){
    	int n;cin>>n;int k;cin>>k;
	    unordered_map<int,int> mp;
	    for(int i=0;i<n;i++){
	        int temp;cin>>temp;
	        mp[temp]++;
	    }
	    int ans=0,count=0;
	    for(auto i:mp){
	        if(i.second>=k) ans++;
	        else count+=i.second;
	    }
	    if(count%k==0) ans+=count/k;
	    else ans=ans+count/k+1;
	    cout<<ans<<endl;
	}
}
