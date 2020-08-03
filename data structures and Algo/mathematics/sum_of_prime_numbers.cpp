#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
	//code
	int tc;cin>>tc;
	while(tc--){
	    int n;cin>>n;
	int ans=0;
	    vector<int> arr(n+1,1);
	    for(int i=2;i<n+1;i++){
	        int j=i*i;
	        while(j<n+1){
	            if(j%i==0) {arr[j]=0;}
	            j=j+i;
	        }
	    }
	    
	    for(int i=2;i<n+1;i++){
	        if(arr[i]==1) ans+=arr[i];
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
