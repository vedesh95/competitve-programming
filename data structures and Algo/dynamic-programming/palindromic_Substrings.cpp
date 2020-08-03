// { Driver Code Starts
// Counts Palindromic Subsequence in a given String
#include<iostream>
#include<cstring>
using namespace std;
 
// Function return the total palindromic subsequence
int countPS(string str);
 
// Driver program
int main()
{
   int t;
	cin>>t;
   while(t--)
	{
	string str;
cin>>str;
cout<<countPS(str)<<endl;
} 
}// } Driver Code Ends


/*You are required to complete below method */
int countPS(string str)
{
   //Your code here
   int n=str.length();
   int count=str.length();
   int dp[n][n];
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           dp[i][j]=0;
       }
   }
   for(int i=0;i<n;i++) dp[i][i]=1;
   for(int i=n-2;i>=0;i--){
       for(int j=i+1;j<n;j++){
           if(str[i]==str[j] && (dp[i+1]==dp[j-1] || j-i==1)){
               dp[i][j]=1;
               count++;
           }
       }
   }
   return count;
}
 
