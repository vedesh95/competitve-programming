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
	
	

	for(int iqq=0;iqq<q;iqq++){
	    int index;cin>>index;
	    
	    if(index==2){
	        int curr,dest;cin>>curr>>dest;
	        if(dest==curr) {cout<<a[dest]<<endl;continue;}

	        if(curr>dest){
	        	int last=dest;
	        	int ans=a[dest];
	        	bool flag=0;
	        	for(int i=last+1;i<=curr;i++){
	        		if(i==curr && h[curr]<=h[last]) { flag=1;}
	        		if(h[i]>h[last]) {ans=ans+a[i];last=i;}
	        	}

                
                if( flag || ans==a[dest]) cout<<"-1"<<endl;
                else cout<<ans<<endl;

	        }
	        else if(curr<dest){
	        	int last=dest;
	        	int ans=a[dest];
	        	bool flag=0;
	        	for(int i=last-1;i>=curr;i--){
	        		if(i==curr && h[curr]<=h[last]) { flag=1;}
	        		if(h[i]>h[last]) {ans=ans+a[i];last=i;}
	        	}


                if(flag || ans==a[dest]) cout<<"-1"<<endl;
                else cout<<ans<<endl;

	        }

	    
     	}

	 else if(index==1){
	        int b,k;cin>>b>>k;
	         a[b]=k;      

	     }
	    
	    
	
	
}
}