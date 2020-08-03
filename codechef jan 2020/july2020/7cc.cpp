#include <bits/stdc++.h>
#define int long long 
using namespace std;

int32_t main() 
{
	int n,q;cin>>n>>q;
	vector<int> h(n);
	vector<int> a(n);
	for(int i=0;i<n;i++){
	    cin>>h[i];
	}
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	
	vector<int> arr(n);
	vector<int> brr(n);
	stack<int> sta;arr[n-1]=a[n-1];
	sta.push(n-1);
	for(int i=n-2;i>=0;i--){
		if(h[i]<h[i+1]){
			arr[i]=a[i]+arr[i+1];
		}
		else{
			while(!sta.empty()){
				if(h[sta.top()]<=h[i]){
					sta.pop();
				}

				else break;
			}
			if(!sta.empty()) arr[i]=a[i]+arr[sta.top()];
			else arr[i]=a[i];

			sta.push(i);

		}
	}

	while(!sta.empty()) { sta.pop(); }
	brr[0]=a[0];
	sta.push(0);
	for(int i=1;i<=n-1;i++){
		if(h[i-1]>h[i]){
			brr[i]=a[i]+brr[i-1];
		}
		else{
			while(!sta.empty()){
				if(h[sta.top()]<=h[i]){
					sta.pop();
				}

				else break;
			}

			if  (!sta.empty()) brr[i]=a[i]+arr[sta.top()];
			else brr[i]=a[i];
			sta.push(i);

		}
	}

	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
		cout<<endl;
	for(int i=0;i<n;i++) cout<<brr[i]<<" ";
		cout<<endl;
	for(int iqq=0;iqq<q;iqq++){
	    int index;cin>>index;
	    
	    if(index==2){
	        int aa,bb;cin>>aa>>bb;
	        if(aa==bb) {cout<<a[aa]<<endl;continue;}

	        if(aa>bb){
                if(h[bb-1]-h[aa-1]>=0) {cout<<"-1"<<endl;}
	            else if((arr[bb-1]-arr[aa-1]+a[aa-1])>=0) cout<<(arr[bb-1]-arr[aa-1]+a[aa-1])<<endl;
	        	else cout<<"-1"<<endl;

	        }
	        else if(aa<bb){
	        	if(h[aa-1]-h[bb-1]<=0) {cout<<"-1"<<endl;}
	        	else if((brr[bb-1]-brr[aa-1]+a[aa-1])>0)  cout<<(brr[bb-1]-brr[aa-1]+a[aa-1])<<endl;
	        	else cout<<"-1"<<endl;

	        }

	    
        }

			 else if(index==1){
			        int b,k;cin>>b>>k;
			         a[b]=k;      

			     }
	    
	    
	
	
     }
}