#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
	int tc;cin>>tc;
	while(tc--){
		string p,s;
		cin>>s>>p;
		int pi=p.size(),si=s.size();
		int m=1000000009;
		vector<int> p_pow(max(pi,si),1);
		for(int i=1;i<p_pow.size();i++){
			p_pow[i]=(p_pow[i-1]*31)%m;
		}
		vector<int> h(si+1,0);
		for(int i=0;i<si;i++){
			h[i+1]=(h[i]+(s[i]-'a'+1)*p_pow[i])%m;
		}
		int h_s=0;
		for(int i=0;i<pi;i++){
			h_s=(h_s+(p[i]-'a'+1)*p_pow[i])%m;
		}
		vector<int> ans;
		for(int i=0;i<si-pi+1;i++){
			int temp=(h[i+pi]-h[i]+m)%m;
			if(temp==(h_s*p_pow[i]%m)){
				ans.push_back(i);
			}
		}
		if(ans.size()){
			cout<<ans.size()<<endl;
			for(int i=0;i<ans.size();i++){
				cout<<ans[i]+1<<" ";
			}
		}else{
			cout<<"Not Found";
		}
		
		cout<<endl;
		cout<<endl;
	}
}
