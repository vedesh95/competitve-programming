#include <bits/stdc++.h>
using namespace std;

int32_t main(){
	int n,q;cin>>n>>q;
	string s;cin>>s;
	vector<vector<int> >arr(n,vector<int> (26,0));
	for(int i=0;i<n;i++){
		if(i>=1){
			for(int j=0;j<26;j++){
				arr[i][j]+=arr[i-1][j];
			}
		}
		arr[i][s[i]-'a']++;
	}

	while(q--){
		int st,end;cin>>st>>end;
		int temparr[26];
		for(int j=0;j<26;j++){
			if(st>=2) temparr[j]=arr[end-1][j]-arr[st-1-1][j];
			else temparr[j]=arr[end-1][j];
		}

		int count=0,ind=0;
		for(int j=0;j<26;j++){
			if(temparr[j]>=count){
				ind=j;count=temparr[j];
			}
		}
		cout<<char('a'+ind)<<" "<<count<<endl;
	}
	return 0;
}