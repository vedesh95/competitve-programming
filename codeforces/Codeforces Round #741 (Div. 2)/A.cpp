#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){
	int tc;cin>>tc;
	while(tc--){
		int a,b;cin>>b>>a;
		if(b<=a/2){
			cout<<a%(a/2+1)<<endl;
		}else cout<<a%b<<endl;
	}
}
