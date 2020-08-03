

//https://practice.geeksforgeeks.org/problems/max-length-chain/1/?track=sp-dynamic-programming&batchId=152

#include <bits/stdc++.h>
using namespace std;

struct val{
	int first;
	int second;
};



int maxChainLen(struct val p[],int n);
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		val p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		
		cout<<maxChainLen(p,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/

/*You are required to complete this method*/
bool cmp(struct val p1,struct val p2){
    if(p1.first > p2.first) return 0;
    else return 1;
}
int maxChainLen(struct val p[],int n)
{
//Your code here
 sort(p,p+n,cmp);
 int dp[n]={0};
 for(int i=1;i<n;i++){
     for(int j=0;j<i;j++){
         if(p[i].first>p[j].second){
             if(dp[i]<dp[j]+1) dp[i]=dp[j]+1;
         }
     }
 }
 
 int maxx=0;
 for(int i=0;i<n;i++){
     if(dp[i]>maxx) maxx=dp[i];
 }

 return maxx+1;
}
