// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to calculate span
// price[]: price array in input
// n: size of array
vector <int> calculateSpan(int price[], int n)
{
   // Your code here
   stack<int>sta;
   vector<int> ans;
   for(int i=1;i<n;i++){
   		if(sta.empty()) {sta.push(i);ans.push_back(i+1);}
   		if(arr[sta.top()]>arr[i]) {sta.push(i);ans.push_back(1);}
   		else if(arr[sta.top]==arr[i]){
   			ans.push_back(i+1-sta.top());

   		}
   		else{
   
   			while(!sta.empty() && arr[sta.top()]<arr[i]){
   				sta.pop();
   				
   			}
   			if(sta.empty()) {sta.push(i);ans.push_back(i+1);}
   			else if(arr[sta.top()]==arr[i]) {ans.push_back(i+1-sta.top());}
   			else{
   				ans.push_back(i+1-sta.top());
   				sta.push(i);
   			}
   			
   		}
   }
   return ans;
}


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		vector <int> s = calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends