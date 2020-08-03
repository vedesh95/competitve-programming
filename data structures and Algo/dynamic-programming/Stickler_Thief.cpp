// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;


 // } Driver Code Ends


// Function to return maximum of sum without adjacent elements
ll FindMaxSum(ll arr[], ll n)
{
    // Your code here
    ll i=n-1,sum1=0;
    while(i>=0){
        if(i==3) {sum1=sum1 + arr[i]+arr[0];break;}
        else if(i==2) {sum1=sum1 + arr[i]+arr[0];break;}
        else if(i==1) {sum1=sum1 + arr[i];break;}
        else if(i==0) {sum1=sum1 + arr[i];break;}
	
        sum1=sum1+arr[i];
	if (arr[i-2]>arr[i-3] && arr[i-2]>arr[i-4]) i=i-2;
	else if(arr[i-3]>arr[i-2] && arr[i-3]>arr[i-4]) i=i-3;
	else if(arr[i-4]>arr[i-3] && arr[i-4]>arr[i -2]) i=i-4;

    }

	// Your code here
    i=n-2;ll sum2=0;
    while(i>=0){
        if(i==3) {sum2=sum2 + arr[i]+arr[0];break;}
        else if(i==2) {sum2=sum2 + arr[i]+arr[0];break;}
        else if(i==1) {sum2=sum2 + arr[i];break;}
        else if(i==0) {sum2=sum2 + arr[i];break;}
	
        sum2=sum2+arr[i];
	if (arr[i-2]>arr[i-3] && arr[i-2]>arr[i-4]) i=i-2;
	else if(arr[i-3]>arr[i-2] && arr[i-3]>arr[i-4]) i=i-3;
	else if(arr[i-4]>arr[i-3] && arr[i-4]>arr[i-2]) i=i-4;

    }
	// Your code here
    i=n-3;ll sum3=0;
    while(i>=0){
        if(i==3) {sum3=sum3 + arr[i]+arr[0];break;}
        else if(i==2) {sum3=sum3 + arr[i]+arr[0];break;}
        else if(i==1) {sum3=sum3 + arr[i];break;}
        else if(i==0) {sum3=sum3 + arr[i];break;}
	
        sum3=sum3+arr[i];
	if (arr[i-2]>arr[i-3] && arr[i-2]>arr[i-4]) i=i-2;
	else if(arr[i-3]>arr[i-2] && arr[i-3]>arr[i-4]) i=i-3;
	else if(arr[i-4]>arr[i-3] && arr[i-4]>arr[i-2]) i=i-4;

    }
	// Your code here
    i=n-4; ll sum4=0;
    while(i>=0){
        if(i==3) {sum4=sum4 + arr[i]+arr[0];break;}
        else if(i==2) {sum4=sum4 + arr[i]+arr[0];break;}
        else if(i==1) {sum4=sum4 + arr[i];break;}
        else if(i==0) {sum4=sum4 + arr[i];break;}
	
        sum4=sum4+arr[i];
	if (arr[i-2]>arr[i-3] && arr[i-2]>arr[i-4]) i=i-2;
	else if(arr[i-3]>arr[i-2] && arr[i-3]>arr[i-4]) i=i-3;
	else if(arr[i-4]>arr[i-3] && arr[i-4]>arr[i-2]) i=i-4;

    }

	return max(sum1,max(sum2,max(sum3,sum4)));
    
        
    
}


// { Driver Code Starts.

int main()
{
	int t;1
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;++i)
			cin>>a[i];
		cout<<FindMaxSum(a,n)<<endl;
	}
	return 0;
}
