#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int tc;cin>>tc;
	while(tc--)
	{
	    int n,k;cin>>n>>k;
	    bool flag=0;
	    vector<int> arr(n);
	    for(int i=0;i<n;i++) cin>>arr[i];
	    
	    for(int i=0;i<n;i++)
	    {
	        if(k%arr[i]!=0) flag=1;
	    }
	    
	    if(flag==0) cout<<"NO"<<endl;
	    else
	    {
	        vector<long> temp(n);
	        for(int i=0;i<n;i++) temp[i]=arr[i];
	        sort(temp.begin(),temp.end());
	        long tempsum=k;
	        
	        vector<int> tempans(n);
	        for(int i=n-1;i>=0;i--)
	        {
	            int ctemps=(tempsum/temp[i])*temp[i];
	            int ved=tempsum/temp[i];
	            if(ctemps+tempsum>k && ctemps+tempsum-temp[i]<k) break;
	            if(tempsum%temp[i]==0) continue;
	            tempsum=tempsum-ctemps;
	            tempans[i]=ved;
	            
	        }
	        for(int i=0;i<n;i++) cout<<temp[i]<<" "<<tempans[i]<<";";
	        cout<<endl;
	    }
	   
	   
	}
}
