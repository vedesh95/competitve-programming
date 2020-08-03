#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Returns the maximum value that  
// can be put in a knapsack of capacity W 
int knapSack(int tw, int wt[], int val[], int n) 
{ 
   // Your code herej
   vector<vector<int> >dp(n+1,vector<int> (tw+1,0));
   
   for(int i=1;i<n+1;i++){
       for(int j=1;j<tw+1;j++){
           dp[i][j]=dp[i-1][j];
           if(wt[i-1]<=j){
               int temp=dp[i-1][j-wt[i-1]]+val[i-1];
               if(dp[i][j]<temp){
                   dp[i][j]=temp;
               }
           }
       }
   }
//   for(int i=0;i<n+1;i++){
//       for(int j=0;j<tw+1;j++){
//           cout<<dp[i][j]<<" ";
//       }
//         cout<<endl;
       
//   }
   
   return dp[n][tw];
}





// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n, w;
        cin>>n>>w;
        int val[n];
        int wt[n];
        
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        for(int i=0;i<n;i++)
            cin>>wt[i];
        
        cout<<knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
