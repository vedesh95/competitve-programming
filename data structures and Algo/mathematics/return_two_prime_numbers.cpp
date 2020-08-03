#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int tc;cin>>tc;
	while(tc--){
		vector<int> arr(10000+1,1);
	    for(int i=2;i<n+1;i++){
	        int j=i*i;
	        while(j<n+1){
	            if(j%i==0) {arr[j]=0;}
	            j=j+i;
	        }
	    }
	    int tc;cin>>tc;
	    while(tc--){
	    	int a;cin>>a;
	    	for(int i=2;i<=a;i++){
	    		if(arr[i]==1 && arr[a-i]==1)
	    			cout<<i<<" "<<a-i;
	    	}
	    	cout<<endl;
	     
	}
	return 0;
	    
}