#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	int tc;cin>>tc;
	while(tc--){
		string s;cin>>s;
		map<char,int> mp;
		for(int i=0;i<s.length();i++){
			mp[s[i]]++;
		} 	
		int count=0;
		for(auto i:mp){
			count+=min(2,i.second);
		}
		cout<<count/2<<endl;
	}
	
	
}
