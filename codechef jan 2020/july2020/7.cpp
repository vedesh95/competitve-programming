#include <bits/stdc++.h>
#define int long long 
using namespace std;

int32_t main() 
{
	int n,q;cin>>n>>q;
	vector<int> h(n+1);
	vector<int> a(n+1);
	for(int i=0;i<n;i++){
	    cin>>h[i+1];
	}
	for(int i=0;i<n;i++){
	    cin>>a[i+1];
	}
	
	vector<vector<int> >dp(n+1,vector<int> (n+1,0));
	for(int i=1;i<n+1;i++){
	    
	    dp[i][i]=a[i];
	    int last =i;
	    for(int j=i+1;j<n+1;j++){
	        if(h[j]>h[last]){
	            dp[i][j]+=(dp[i][last]+a[j]);
	            last=j;
	        }
	    }
	}
	
	for(int i=n;i>=1;i--){
	    
	    int last =i;
	    dp[i][i]=a[i];
	    for(int j=i-1;j>=1;j--){
	        if(h[j]>h[last]){
	            dp[i][j]+=(dp[i][last]+a[j]);
	            last=j;
	        }
	    }
	}
	
    // for(int i=1;i<n+1;i++){
    // 	for(int j=1;j<n+1;j++){
    // 		cout<<dp[i][j]<<" ";
    // 	}
    // 	cout<<endl;
    // }

	for(int iqq=0;iqq<q;iqq++){
	    int index;cin>>index;
	    
	    if(index==2){
	        int curr,dest;cin>>curr>>dest;
	        if(dest==curr) {cout<<dp[dest][dest]<<endl;continue;}

	        else if(curr>dest) {
	            if(dp[dest][curr]>0)
	            {cout<<dp[dest][curr]<<endl;}
	            else cout<<"-1"<<endl;
	        }
	        
	        if(dest>curr) {
	            if(dp[dest][curr]>0)
	            {cout<<dp[dest][curr]<<endl;}
	            else cout<<"-1"<<endl;
	        }
	    }
	    
	    if(index==1){
	        int b,k;cin>>b>>k;
	        int tt=dp[b][b];
	        for(int i=1;i<=b;i++){
	        	for(int j=b;j<=n;j++)
	        	{
	        		if(dp[i][j]>0 ) dp[i][j]=dp[i][j]-tt+k;
	        	}
	        }
	        
	        for(int i=b;i<=n;i++){
	        	for(int j=b;j>=1;j--)
	        	{
	        		if(i==b && j==b) continue;
	        		if(dp[i][j]>0) dp[i][j]=dp[i][j]-tt+k;
	        	}
	        }
		// for(int i=1;i<n+1;i++){
	 //    	for(int j=1;j<n+1;j++){
	 //    		cout<<dp[i][j]<<" ";
	 //    	}
	 //    	cout<<endl;
	 //    }	        

	    }
	}
	
}
