#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;


int32_t main() {
	//code
	int tc;cin>>tc;
	while(tc--){
	    int n;cin>>n;
        vector<int> arr(n);
        int count=0;
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=31;i>=0;i--){
            int c1=0,c2=0;
            for(int j=0;j<n;j++){
                if(((1<<i)&(arr[j]))>=1) {/*cout<<((1<<i)&(arr[j]));*/c1++;}
                else {/*cout<<((1<<i)&(arr[j]));*/c2++;}
            }
            // cout<<endl;
            count=(count+(c1*c2)%mod)%mod;
        }

        cout<<(2*count)%mod<<endl;
	}
	
	return 0;
}