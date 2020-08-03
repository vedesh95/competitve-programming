// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int getminpage(map<int,int> mp){
	int index=INT_MAX,page;
	for(auto i:mp){
		if(i.second<index){
			index=i.second;
			page=i.first;
		}
	}

	return page;
}
 int main(){
 	int tc;cin>>tc;
 	while(tc--){
 		int n;cin>>n;
 		vector<int> arr(n);
 		for(int i=0;i<n;i++) cin>>arr[i];
 	    int k;cin>>k;
 		set<int> s;
 		map<int,int> mp;
 		int i=0,pg=0;
 		while(s.size()<k && i<n){
 			s.insert(arr[i]);pg++;mp[arr[i]]=i;i++;
 		}
 		for(i;i<n;i++){
 			if(s.find(arr[i])==s.end()){
 				int page=getminpage(mp);
 				s.erase(page);s.insert(arr[i]);
 				mp[page]=INT_MAX;mp[arr[i]]=i;
 				pg++;
 			}
 		}

 		cout<<pg<<endl;
 	}
 }