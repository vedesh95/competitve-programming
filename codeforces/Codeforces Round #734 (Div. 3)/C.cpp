#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;int k;cin>>k;
		vector<int> arr(n);
		for(int i=0;i<n;i++) cin>>arr[i];
		map<int,int> mp;
		for(int i=0;i<n;i++){
			mp[arr[i]]++;
		} 	
		int count=0;
		for(auto i:mp){
			count+=min(k,i.second);
		}
		count=(count/k)*k;
		mp.clear();
		int tempcount=0;
		map<int,set<int>>mpp;
		for(int i=0;i<n;i++){
		        int j=1;
                if(tempcount<count){
                    while(j<=k && (mpp[j].find(arr[i])!=mpp[j].end() || mpp[j].size()>=(count/k))) j++;
                    mpp[j].insert(arr[i]);
				    if(j<=k) {cout<<j<<" ";tempcount++;}
				    else cout<<0<<" ";
                }else cout<<0<<" ";
		
		} 
		cout<<endl;
	}
}
