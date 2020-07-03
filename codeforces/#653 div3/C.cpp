#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll tc;cin>>tc;
	while(tc--){
		ll n;cin>>n;
		string s;cin>>s;
		int upc=0,ans=0;
		for(int i=0;i<s.length();i++){
			if(s[i]==')' && upc<=0) ans++;
			else if(s[i]==')') upc--;
			else upc++;
		}
		
		cout<<ans<<endl;
		
	}
	
}
