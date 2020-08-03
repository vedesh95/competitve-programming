#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
	// your code goes here
	int tc;cin>>tc;
	while(tc--){
	    int n,k;cin>>n>>k;
	    vector<int> vec(n);
	    for(int i=0;i<n;i++) cin>>vec[i];
	    for(int i=0;i<n;i++){
	        if(vec[i]%k==0) cout<<1;
	        else cout<<0;
	    }
	   cout<<endl;
	}
	return 0;
}

