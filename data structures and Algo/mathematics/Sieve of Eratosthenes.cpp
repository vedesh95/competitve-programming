#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int tc;cin>>tc;
	while(tc--){
	    int n;cin>>n;
	    vector<int> arr(n+1,1);
	    for(int i=2;i<n+1;i++){
	        int j=i*i;
	        while(j<n+1){
	            if(j%i==0) {arr[j]=0;}
	            j=j+i;
	        }
	    }
	    
	    for(int i=2;i<n+1;i++){
	        if(arr[i]==1) cout<<i<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
